#include <stdint.h>

#include "crc.h"
#include "ext4.h"
#include "sdcard.h"
#include "tholinstd.h"

#define VERBOSE

const uint32_t block_sizes_from_log[] = {1024, 2048, 4096, 8192, 65536};

uint32_t last_read_block;
uint8_t ext4_buff[EXT4_MAX_BLOCK_SIZE] __attribute__ ((aligned (4)));

uint16_t curr_block_size;
uint16_t lbas_per_block;
uint8_t is64bit;
uint8_t sparse_super;
uint8_t orphans_in_file;
uint8_t metadata_csums, gdt_csums;
uint8_t flex_bg;
uint64_t flex_bg_size;
uint8_t has_huge_files;

uint32_t o_lba;

ext4_super_block sb;

int ext4_read_block(uint32_t block) {
    if(block == last_read_block) return 0;
    uint32_t dev_block = block * lbas_per_block + o_lba + (sb.s_first_data_block * lbas_per_block);
    for(uint16_t i = 0; i < lbas_per_block; i++) {
        if(sd_read_block(dev_block, ext4_buff + i * 512) != 0) return EXT4_IO_ERR;
        dev_block++;
    }
    last_read_block = block;
    return 0;
}

inline uint64_t ext4_inode_bgroup(uint64_t inode_num) {
    return (inode_num - 1) / sb.s_inodes_per_group;
}

inline uint32_t ext4_inode_index(uint64_t inode_num) {
    return (inode_num - 1) % sb.s_inodes_per_group;
}

uint64_t ext4_inode_address(uint64_t inode_num) {
    return ext4_inode_index(inode_num) * sb.s_inode_size;
}

//Returns block and address within that block of the given group’s descriptor
void ext4_group_descriptor_location(uint64_t bgroup, uint64_t *block, uint32_t *address) {
    uint64_t abs_addr = bgroup * sb.s_desc_size;
    *block = abs_addr / curr_block_size;
    *address = abs_addr % curr_block_size;
    *block = *block + 1;
}

uint8_t ext4_read_bg_descriptor(uint64_t block, uint32_t offset, ext4_group_desc *desc) {
    uint8_t res = ext4_read_block(block);
    if(res) return res;
    ext4_group_desc_raw *ptr1 = (ext4_group_desc_raw *)(ext4_buff + offset);
    desc->bg_block_bitmap = ptr1->bg_block_bitmap_lo;
    desc->bg_inode_bitmap = ptr1->bg_inode_bitmap_lo;
    desc->bg_inode_table = ptr1->bg_inode_table_lo;
    desc->bg_free_blocks_count = ptr1->bg_free_blocks_count_lo;
    desc->bg_free_inodes_count = ptr1->bg_free_inodes_count_lo;
    desc->bg_used_dirs_count = ptr1->bg_used_dirs_count_lo;
    desc->bg_flags = ptr1->bg_flags;
    desc->bg_exclude_bitmap = ptr1->bg_exclude_bitmap_lo;
    desc->bg_block_bitmap_csum = ptr1->bg_block_bitmap_csum_lo;
    desc->bg_inode_bitmap_csum = ptr1->bg_inode_bitmap_csum_lo;
    desc->bg_itable_unused = ptr1->bg_itable_unused_lo;
    desc->bg_checksum = ptr1->bg_checksum;
    if(is64bit) {
        desc->bg_block_bitmap |= (uint64_t)ptr1->bg_block_bitmap_hi << 32;
        desc->bg_inode_bitmap |= (uint64_t)ptr1->bg_inode_bitmap_hi << 32;
        desc->bg_inode_table |= (uint64_t)ptr1->bg_inode_table_hi << 32;
        desc->bg_free_blocks_count |= (uint32_t)ptr1->bg_free_blocks_count_hi << 16;
        desc->bg_free_inodes_count |= (uint32_t)ptr1->bg_free_inodes_count_hi << 16;
        desc->bg_used_dirs_count |= (uint32_t)ptr1->bg_used_dirs_count_hi << 16;
        desc->bg_exclude_bitmap |= (uint64_t)ptr1->bg_exclude_bitmap_hi << 32;
        desc->bg_block_bitmap_csum |= (uint32_t)ptr1->bg_block_bitmap_csum_hi << 16;
        desc->bg_inode_bitmap_csum |= (uint32_t)ptr1->bg_inode_bitmap_csum_hi << 16;
        desc->bg_itable_unused |= (uint32_t)ptr1->bg_itable_unused_hi << 16;
    }
    if(!gdt_csums) {
        desc->checksum_valid = 1;
        return EXT4_OKAY;
    }
    
    uint8_t crcbuff[sb.s_desc_size+16+4];
    for(int i = 0; i < 16; i++) crcbuff[i] = sb.s_uuid[i];
    for(int i = 0; i < 4; i++) crcbuff[i + 16] = block >> (i*8);
    uint8_t *ptr3 = crcbuff + 16 + 4;
    uint8_t *ptr2 = ext4_buff + offset;
    for(int i = 0; i < sb.s_desc_size; i++) {
        uint8_t val = ptr2[i];
        if(i == 0x1E || i == 0x1F) {
            if(metadata_csums) val = 0;
            else continue;
        }
        *ptr3 = val;
        ptr3++;
    }
    uint16_t crc;
    if(metadata_csums) {
        crc = (uint16_t)(~crc32c_sw(0, crcbuff, sb.s_desc_size+16+4));
    }else {
        crc = gen_crc16(crcbuff, sb.s_desc_size-2+16+4);
    }
    desc->checksum_valid = crc == desc->bg_checksum;
	if(!desc->checksum_valid) {
		printf("\033[1;31mWARNING:\033[0m Checksum invalid on BG descriptor\r\n");
	}
    
    return EXT4_OKAY;
}

uint8_t ext4_inode_raw_pointer(uint64_t inode_num, ext4_inode_raw **ptr) {
    uint64_t i_bgroup = ext4_inode_bgroup(inode_num);
    uint64_t i_address = ext4_inode_address(inode_num);
    uint64_t d_block;
    uint32_t d_address;
    ext4_group_descriptor_location(i_bgroup, &d_block, &d_address);
    ext4_group_desc bdesc;
    uint8_t res = ext4_read_bg_descriptor(d_block, d_address, &bdesc);
    if(res) return res;
    res = ext4_read_block(bdesc.bg_inode_table + i_address / curr_block_size);
    if(res) return res;
    uint8_t *ptr1 = ext4_buff + (i_address % curr_block_size);
    *ptr = ((ext4_inode_raw *)ptr1);
    return EXT4_OKAY;
}

uint8_t ext4_read_inode(uint64_t inode_num, ext4_inode *ret_inode) {
    ext4_inode_raw *inode;
    uint8_t res = ext4_inode_raw_pointer(inode_num, &inode);
    if(res) return res;
    ret_inode->inode_num = inode_num;
    ret_inode->i_mode = inode->i_mode;
    ret_inode->i_uid = inode->i_uid | ((uint32_t)inode->i_uid_high << 16);
    ret_inode->i_gid = inode->i_gid | ((uint32_t)inode->i_gid_high << 16);
    ret_inode->i_size = inode->i_size_lo | ((uint64_t)inode->i_size_high << 32);
    if(sb.s_inode_size > 129) ret_inode->i_extra_isize = inode->i_extra_isize;
    else ret_inode->i_extra_isize = 0;
    ret_inode->i_atime = inode->i_atime;
    if(ret_inode->i_extra_isize >= 0x0F) ret_inode->i_atime += (int64_t)(inode->i_atime_extra & 3) << 32;
    ret_inode->i_ctime = inode->i_ctime;
    if(ret_inode->i_extra_isize >= 0x08) ret_inode->i_ctime += (int64_t)(inode->i_ctime_extra & 3) << 32;
    ret_inode->i_mtime = inode->i_mtime;
    if(ret_inode->i_extra_isize >= 0x0C) ret_inode->i_mtime += (int64_t)(inode->i_mtime_extra & 3) << 32;
    ret_inode->i_dtime = inode->i_dtime;
    ret_inode->i_links_count = inode->i_links_count;
    ret_inode->i_blocks = inode->i_blocks_lo;
    if(!has_huge_files) ret_inode->i_blocks |= (uint64_t)inode->i_blocks_high << 32;
    if(!has_huge_files || (inode->i_flags & EXT4_HUGE_FILE_FL) == 0) {
        uint8_t rest = ret_inode->i_blocks % lbas_per_block;
        ret_inode->i_blocks /= lbas_per_block;
        if(rest) ret_inode->i_blocks++;
    }
    ret_inode->i_flags = inode->i_flags;
    for(uint8_t i = 0; i < 60; i++) ret_inode->i_block[i] = inode->i_block[i];
    ret_inode->i_generation = inode->i_generation;
    ret_inode->i_file_acl = inode->i_file_acl_lo | ((uint64_t)inode->i_file_acl_high << 32);
    if(ret_inode->i_extra_isize >= 0x18) {
        ret_inode->i_crtime = inode->i_crtime;
        ret_inode->i_crtime += (int64_t)(inode->i_crtime_extra & 3) << 32;
    }else ret_inode->i_crtime = 0;
    ret_inode->i_osd1 = inode->i_osd1;
    if((ret_inode->i_flags & EXT4_EA_INODE_FL) == 0) ret_inode->i_version = inode->i_osd1;
    else ret_inode->i_version = 0;
    if(ret_inode->i_extra_isize >= 0x1C) ret_inode->i_version |= (uint64_t)inode->i_version_hi << 32;
    if(ret_inode->i_extra_isize >= 0x1F) ret_inode->i_projid = inode->i_projid;
    else ret_inode->i_projid = 0;
    
    uint32_t expected_csum = inode->i_checksum_lo;
    if(ret_inode->i_extra_isize >= 0x04) expected_csum |= (uint32_t)inode->i_checksum_hi << 16;
    if(!metadata_csums) {
        ret_inode->checksum_valid = 1;
        return EXT4_OKAY;
    }
    
    uint8_t crcbuff[16+4+4+sb.s_inode_size];
    for(int i = 0; i < 16; i++) crcbuff[i] = sb.s_uuid[i];
    for(int i = 0; i < 4; i++) crcbuff[i + 16] = inode_num >> (i*8);
    for(int i = 0; i < 4; i++) crcbuff[i + 20] = ret_inode->i_generation >> (i*8);
    uint8_t *ptr1 = (uint8_t *)inode;
    for(uint32_t i = 0; i < sb.s_inode_size; i++) {
        uint8_t val = *ptr1;
        ptr1++;
        if(i == 0x82 || i == 0x83 || i == 0x7C || i == 0x7D) val = 0;
        crcbuff[i + 24] = val;
    }
    uint32_t crc = ~crc32c_sw(0, crcbuff, 16+4+4+sb.s_inode_size);
    if(ret_inode->i_extra_isize < 0x04) crc &= 0xFFFF;
    ret_inode->checksum_valid = crc == expected_csum;
	if(!ret_inode->checksum_valid) {
		printf("\033[1;31mWARNING:\033[0m Checksum invalid on inode %lu", ret_inode->inode_num);
	}
    
    return EXT4_OKAY;
}

uint8_t ext4_find_next_extent(ext4_FIL *fhandle) {
    ext4_etree_entry *ext = fhandle->path + fhandle->curr_depth;
    //Very I/O resource intensive, but re-read the extent block / inode from disk each time
    //Will eventually allow to safely have concurent file handles on the same inode
    uint8_t *blockdata;
    if(ext->block == 0xFFFFFFFFFFFFFFFF) {
		ext4_inode_raw *inode;
		uint8_t res = ext4_inode_raw_pointer(fhandle->inode_num, &inode);
		if(res) return res;
		blockdata = inode->i_block;		
	}else {
		uint8_t res = ext4_read_block(ext->block);
		if(res) return res;
		blockdata = ext4_buff;
	}
	ext4_extent_header hdr = *(ext4_extent_header *)blockdata;
    if(hdr.eh_magic != 0xF30A) return EXT4_INVALID_MAGIC;
	blockdata += 12;
	if(ext->curr_entry == hdr.eh_entries - 1) {
		if(ext->block == 0xFFFFFFFFFFFFFFFF || fhandle->curr_depth == 0) return EXT4_LAST_EXTENT;
		fhandle->curr_depth--;
		return ext4_find_next_extent(fhandle);
	}
	ext->curr_entry++;
	blockdata += ext->curr_entry * 12;
	if(hdr.eh_depth == 0) {
		fhandle->curr_extent = *(ext4_extent *)blockdata;
	}else {
		ext4_extent_idx idx = *(ext4_extent_idx *)blockdata;
		fhandle->curr_depth++;
		if(fhandle->curr_depth == EXT4_MAX_ETREE_DEPTH) {
			return EXT4_TOO_DEEP;
		}
		fhandle->path[fhandle->curr_depth].block = (uint64_t)idx.ei_leaf_lo | ((uint64_t)idx.ei_leaf_hi << 32);
		fhandle->path[fhandle->curr_depth].curr_entry = 0xFFFF;
		return ext4_find_next_extent(fhandle);
	}
    return EXT4_OKAY;
}

uint8_t ext4_open_read(uint64_t inode_num, ext4_FIL* fhandle) {
	ext4_inode inode;
	uint8_t res = ext4_read_inode(inode_num, &inode);
	if(res) return res;
	if((inode.i_flags & EXT4_EXTENTS_FL) == 0) {
		return EXT4_INCOMPAT;
	}
	ext4_extent_header hdr = *(ext4_extent_header *)inode.i_block;
	ext4_etree_entry root_entry = {.block = 0xFFFFFFFFFFFFFFFF, .curr_entry = 0xFFFF};
	
	fhandle->inode_num = inode.inode_num;
	fhandle->position = 0;
	fhandle->limit = inode.i_size;
	fhandle->curr_depth = 0;
	fhandle->path[0] = root_entry;
	fhandle->inode_flags = inode.i_flags;
	if(hdr.eh_entries == 0) {
		//A blank file. Don’t do anything more.
	}else {
		//First step of walking the extent tree
		uint8_t res = ext4_find_next_extent(fhandle);
		if(res) return res;
	}
	return EXT4_OKAY;
}

inline uint16_t ext4_ee_len(uint16_t ee_len) {
	return ee_len <= 32768 ? ee_len : ee_len - 32768;
}

uint8_t ext4_read(ext4_FIL* fhandle, uint8_t* buff, uint32_t count, uint32_t* read) {
	*read = 0;
	if(fhandle->position >= fhandle->limit || count == 0) return EXT4_OKAY;
	ext4_extent ext;
	uint16_t ext_len;
	uint64_t extent_pos;
	uint32_t extent_block;
	uint32_t block_pos = 0;
	uint64_t block;
	uint8_t flag = 1;
	for(uint32_t i = 0; i < count;) {
		if(flag) {
			flag = 0;
			ext = fhandle->curr_extent;
			ext_len = ext4_ee_len(ext.ee_len);
			extent_pos = fhandle->position - ext.ee_block * curr_block_size;
			extent_block = extent_pos / curr_block_size;
			block_pos = extent_pos % curr_block_size;
			block = ((uint64_t)ext.ee_start_hi << 32) | ext.ee_start_lo;
			block += extent_block;
			uint8_t res = ext4_read_block(block);
			if(res) return res;
		}
		
		uint64_t diff = fhandle->limit - fhandle->position;
		uint16_t max_copy = curr_block_size - block_pos;
		uint32_t remaining = count - i;
		if(diff < remaining) remaining = (uint32_t)diff;
		if(max_copy < remaining) remaining = max_copy;
		//memcpy(buff, ext4_buff + block_pos, (uint16_t)remaining);
		uint8_t* restrict dest = buff;
		uint8_t* restrict src = ext4_buff + block_pos;
		for(uint32_t xi = 0; xi < remaining; xi++) {
			*dest = *src;
			dest++;
			src++;
		}
		block_pos += remaining;
		buff += remaining;
		fhandle->position += (uint64_t)remaining;
		*read = *read + remaining;
		i += remaining;
		if(fhandle->position >= fhandle->limit) { //EOF
			return EXT4_OKAY;
		}
		
		if(block_pos >= curr_block_size) {
			extent_block++;
			block_pos = 0;
			block++;
			if(extent_block >= ext_len) {
				uint8_t res = ext4_find_next_extent(fhandle);
				if(res) return res;
				if(res == EXT4_LAST_EXTENT) return EXT4_OKAY; //EOF
				flag = 1;
			}else if(i < count) {
				uint8_t res = ext4_read_block(block);
				if(res) return res;
			}
		}
	}
	
	return EXT4_OKAY;
}

uint8_t ext4_seek(ext4_FIL* fhandle, uint64_t position) {
	if(position >= fhandle->limit) return EXT4_EOF;
	if(position == fhandle->position) return EXT4_OKAY;
	uint64_t target_block = position / curr_block_size;
	fhandle->curr_depth = 0;
	ext4_inode_raw *inode;
	uint8_t res = ext4_inode_raw_pointer(fhandle->inode_num, &inode);
	if(res) return res;
	uint8_t *blockdata = inode->i_block;	
	ext4_extent_header hdr = *(ext4_extent_header *)blockdata;
	blockdata += 12;
	uint64_t prev_block = 0xFFFFFFFFFFFFFFFF;
	while(hdr.eh_depth != 0) {
		ext4_extent_idx *last_idx;
		ext4_extent_idx *idx;
		uint8_t found = 0;
		uint16_t entry_num;
		for(entry_num = 0; entry_num < hdr.eh_entries; entry_num++) {
			idx = (ext4_extent_idx *)blockdata;
			blockdata += 12;
			if(hdr.eh_entries == 1) {
				found = 1;
				break;
			}
			if(entry_num != 0) {
				if(last_idx->ei_block <= target_block && idx->ei_block > target_block) {
					idx = last_idx;
					found = 1;
					break;
				}
			}
			last_idx = idx;
		}
		if(!found) {
			return EXT4_FILE_GAP;
		}
		uint64_t block = ((uint64_t)idx->ei_leaf_hi << 32) | idx->ei_leaf_lo;
		res = ext4_read_block(block);
		if(res) return res;
		fhandle->path[fhandle->curr_depth].block = prev_block;
		fhandle->path[fhandle->curr_depth].curr_entry = entry_num;
		fhandle->curr_depth++;
		prev_block = block;
		if(fhandle->curr_depth == EXT4_MAX_ETREE_DEPTH) return EXT4_TOO_DEEP;
		blockdata = ext4_buff;
		hdr = *(ext4_extent_header *)blockdata;
		blockdata++;
	}
	
	uint8_t found = 0;
	ext4_extent *ext;
	uint16_t entry_num;
	for(entry_num = 0; entry_num < hdr.eh_entries; entry_num++) {
		ext = (ext4_extent *)blockdata;
		blockdata += 12;
		uint32_t start = ext->ee_block;
		uint32_t end = ext->ee_len + start;
		if(target_block >= start && target_block < end) {
			found = 1;
			break;
		}
	}
	if(!found) {
		return EXT4_FILE_GAP;
	}
	fhandle->path[fhandle->curr_depth].block = prev_block;
	fhandle->path[fhandle->curr_depth].curr_entry = entry_num;
	fhandle->curr_extent = *ext;
	fhandle->position = position;
	return EXT4_OKAY;
}

uint8_t ext4_open_dir(uint64_t inode_num, ext4_DIR *dhandle) {
	uint8_t res = ext4_open_read(inode_num, &dhandle->fhandle);
	if(res) return res;
	uint8_t buff[sizeof(ext4_dir_entry_2)];
	uint32_t read;
	res = ext4_read(&dhandle->fhandle, buff, sizeof(ext4_dir_entry_2), &read);
	if(res) return res;
	if(read != sizeof(ext4_dir_entry_2)) return EXT4_BAD_DIR_START;
	ext4_dir_entry_2 e2 = *(ext4_dir_entry_2 *)buff;
	buff[0] = 0;
	res = ext4_read(&dhandle->fhandle, buff, 1, &read);
	if(res) return res;
	if(e2.name_len != 1 || buff[0] != '.' || e2.inode != inode_num) return EXT4_BAD_DIR_START;
	dhandle->dot_inode = e2.inode;
	dhandle->tree_start = e2.rec_len;
	res = ext4_seek(&dhandle->fhandle, e2.rec_len);
	if(res) return res;
	res = ext4_read(&dhandle->fhandle, buff, sizeof(ext4_dir_entry_2), &read);
	if(res) return res;
	if(read != sizeof(ext4_dir_entry_2)) return EXT4_BAD_DIR_START;
	e2 = *(ext4_dir_entry_2 *)buff;
	buff[0] = 0;
	res = ext4_read(&dhandle->fhandle, buff, 2, &read);
	if(res) return res;
	if(e2.name_len != 2 || buff[0] != '.' || buff[1] != '.') return EXT4_BAD_DIR_START;
	dhandle->dotdot_inode = e2.inode;
	dhandle->tree_start += e2.rec_len;
	res = ext4_seek(&dhandle->fhandle, dhandle->tree_start);
	if(res) return res;
	return EXT4_OKAY;
}

uint8_t ext4_dir_next(ext4_DIR *dhandle, uint32_t *inode_num, char *name, uint8_t *file_type) {
	uint8_t buff[sizeof(ext4_dx_root)];
	if((dhandle->fhandle.inode_flags & EXT4_INDEX_FL) != 0) {
		printf("EXT4_INDEX_FL UNSUPPORTED\r\n");
		return EXT4_BAD_DIR_TREE;
	}
	uint32_t read;
	ext4_dir_entry_2 entry = {.rec_len = sizeof(ext4_dir_entry_2)};
	uint8_t res;
	do {
		if(dhandle->fhandle.limit - dhandle->fhandle.position < sizeof(ext4_dir_entry_2)) return EXT4_EOF;
		res = ext4_read(&dhandle->fhandle, buff, sizeof(ext4_dir_entry_2), &read);
		if(res) return res;
		entry = *(ext4_dir_entry_2 *)buff;
		if(read != sizeof(ext4_dir_entry_2)) return EXT4_BAD_DIR_ENTRY;
	}while(entry.inode == 0);
	uint64_t pre_position = dhandle->fhandle.position;
	if(inode_num) *inode_num = entry.inode;
	if(file_type) *file_type = entry.file_type;
	if(name) {
		uint8_t name_pos = 0;
		while(1) {
			uint8_t to_read = entry.name_len - name_pos;
			if(to_read == 0) break;
			if(to_read > sizeof(ext4_dx_root)) to_read = sizeof(ext4_dx_root);
			res = ext4_read(&dhandle->fhandle, buff, to_read, &read);
			if(res) return res;
			if(read != to_read) return EXT4_BAD_DIR_ENTRY;
			for(uint8_t i = 0; i < to_read; i++) {
				*name = buff[i];
				name++;
				name_pos++;
			}
		}
		*name = 0;
	}
	
	res = ext4_seek(&dhandle->fhandle, pre_position + entry.rec_len - sizeof(ext4_dir_entry_2));
    if(res == EXT4_EOF) res = EXT4_OKAY;
    return res;
}

uint8_t ext4_path_parser(uint64_t curr_inode, char *path, uint32_t *inode_num, uint8_t *file_type) {
	char substr[256];
	char next_name[256];
	ext4_DIR dhandle;
	uint8_t should_be_dir = 0;
	uint8_t the_end = 0;
	uint16_t strlen = 0;
	for(uint16_t i = 0; i < 256; i++) {
		if(i == 255 && path[i] != '/' && path[i] != 0) return EXT4_FN_TOO_LONG;
		if(path[i] == '/') {
			should_be_dir = 1;
			the_end = path[i + 1] == 0;
			break;
		}
		if(path[i] == 0) {
			the_end = 1;
			break;
		}
		strlen++;
		substr[i] = path[i];
	}
	uint8_t res = ext4_open_dir(curr_inode, &dhandle);
	if(res) return res;
	uint8_t found = 0;
	uint32_t next_inum;
	uint8_t next_type;
	if(substr[0] == '.' && strlen == 1) {
		next_inum = dhandle.dot_inode;
		next_type = 0x02;
		goto skip_loop;
	}
	if(substr[0] == '.' && substr[1] == '.' && strlen == 2) {
		next_inum = dhandle.dotdot_inode;
		next_type = 0x02;
		goto skip_loop;
	}
	while(1) {
		res = ext4_dir_next(&dhandle, &next_inum, next_name, &next_type);
		if(res == EXT4_EOF) return EXT4_FILE_NOT_FOUND;
		if(res) return res;
		found = 1;
		for(uint16_t i = 0; i < strlen; i++) {
			if(next_name[i] == 0 || next_name[i] != substr[i]) {
				found = 0;
				break;
			}
			if(i == strlen - 1 && next_name[i + 1] == 0) break;
		}
		if(!found) continue;
		if(should_be_dir && next_type != 0x02) return EXT4_FILE_NOT_FOUND;
		break;
	}
skip_loop:
	if(next_type == 0x07) {
		//Oh fuck, its a symlink! Need to follow it.
		res = ext4_resolve_symlink(curr_inode, next_inum, &next_inum, &next_type);
		if(res) return res;
	}
	if(the_end) {
		if(inode_num) *inode_num = next_inum;
		if(file_type) *file_type = next_type;
		return EXT4_OKAY;
	}
	return ext4_path_parser(next_inum, path + strlen + 1, inode_num, file_type);
}

uint8_t ext4_find_file(char *path, uint32_t *inode_num, uint8_t *file_type) {
	if(!path || path[0] != '/') return EXT4_FILE_NOT_FOUND;
	
	return ext4_path_parser(2, path + 1, inode_num, file_type);
}

uint8_t ext4_resolve_symlink(uint64_t dir_inode, uint64_t symlink_inode, uint32_t *inode_num, uint8_t *file_type) {
	ext4_inode_raw *inode;
	uint8_t res = ext4_inode_raw_pointer(symlink_inode, &inode);
	if(res) return res;
	char buff[1024];
	if((inode->i_flags & EXT4_EXTENTS_FL) == 0) {
		//Link target in i_block
		for(uint8_t i = 0; i < 60; i++) buff[i] = inode->i_block[i];
		buff[60] = 0;
		if(buff[0] == '/') return ext4_path_parser(2, buff + 1, inode_num, file_type);
		return ext4_path_parser(dir_inode, buff, inode_num, file_type);
	}
	//Link target in file contents
	ext4_FIL fhandle;
	res = ext4_open_read(symlink_inode, &fhandle);
	if(res) return res;
	uint32_t read;
	uint8_t next_file_type;
	res = ext4_read(&fhandle, &next_file_type, 1, &read);
	if(res) return res;
	if(read == 0) return EXT4_FILE_NOT_FOUND;
	uint64_t curr_inode = 2;
	uint32_t next_inode;
	if(next_file_type != '/') curr_inode = dir_inode;
	else {
		res = ext4_seek(&fhandle, 0);
		if(res) return res;
	}

	while(1) {
		uint16_t buff_pos = 0;
		uint8_t hit_end = 0;
		while(1) {
			res = ext4_read(&fhandle, (uint8_t *)buff + buff_pos, 1, &read);
			if(res) return res;
			if(read == 0) {
				hit_end = 1;
				buff[buff_pos] = 0;
				break;
			}
			if(buff[buff_pos] == '/' && 1024 - buff_pos < 256) {
				buff[buff_pos + 1] = 0;
				break;
			}
		}
	    res = ext4_path_parser(curr_inode, buff, &next_inode, &next_file_type);
		if(res) return res;
		curr_inode = next_inode;
		if(hit_end) {
			if(inode_num) *inode_num = curr_inode;
			if(file_type) *file_type = next_file_type;
			break;
		}
	}
	
	return EXT4_OKAY;
}

void ext4_test_list_dir(uint32_t inode) {
	ext4_DIR dhandle;
	if(ext4_open_dir(inode, &dhandle)) return;
	uint32_t inode_num;
	uint8_t file_type;
	char name_buff[256];
	printf("-> . %d/\r\n-> .. %d/\r\n", dhandle.dot_inode, dhandle.dotdot_inode);
	while(1) {
		uint8_t err = ext4_dir_next(&dhandle, &inode_num, name_buff, &file_type);
		if(err == EXT4_EOF) break;
		else if(err) return;
		printf("-> %s", name_buff);
		if(file_type == 0x02) putchar('/');
		printf(" %u\r\n", inode_num);
	}
    printf("\r\n");
}

int ext4_mount(uint32_t lba_offset) {
    o_lba = lba_offset;
    curr_block_size = 1024;
    lbas_per_block = curr_block_size / 512;
    sb.s_first_data_block = 1;
    last_read_block = 0xFFFFFFFF;
    
    uint8_t rc = ext4_read_block(0);
    if(rc) return rc;
    
    {
        ext4_super_block *ptr1 = (ext4_super_block *)ext4_buff;
        sb = *ptr1;
    }
    
    if(block_sizes_from_log[sb.s_log_block_size] > EXT4_MAX_BLOCK_SIZE) return EXT4_BLOCKS_TOO_BIG;
    curr_block_size = block_sizes_from_log[sb.s_log_block_size];
    lbas_per_block = curr_block_size / 512;
    if(sb.s_magic != 0xEF53) return EXT4_INVALID_MAGIC;
	
#ifdef VERBOSE
	printf("FS has %d bytes sized blocks\r\n", curr_block_size);
	printf("There are %d blocks per group and the inode size is %d bytes\r\n", sb.s_blocks_per_group, sb.s_inode_size);
#endif
    
    //s_feature_compat
    if((sb.s_feature_compat & COMPAT_HAS_JOURNAL) != 0) {
        //TODO: flush journal so we can ignore it from here on out
    }
    
    sparse_super = 0;
    if((sb.s_feature_compat & COMPAT_SPARSE_SUPER2) != 0) sparse_super = 1;
    orphans_in_file = 0;
    if((sb.s_feature_ro_compat & RO_COMPAT_ORPHAN_PRESENT) != 0) orphans_in_file = 1;
    metadata_csums = gdt_csums = has_huge_files = 0;
    if((sb.s_feature_ro_compat & RO_COMPAT_METADATA_CSUM) != 0) metadata_csums = 1;
    if((sb.s_feature_ro_compat & RO_COMPAT_GDT_CSUM) != 0) gdt_csums = 1;
    if((sb.s_feature_ro_compat & RO_COMPAT_HUGE_FILE) != 0) has_huge_files = 1;
    
    //We only support a specific set of ext4 features
    if((sb.s_feature_incompat & ~(INCOMPAT_FILETYPE | INCOMPAT_EXTENTS | INCOMPAT_64BIT | INCOMPAT_FLEX_BG | INCOMPAT_CSUM_SEED)) != 0) return EXT4_INCOMPAT;
    //We don’t support *not* using extents
    if((sb.s_feature_incompat & INCOMPAT_EXTENTS) == 0) return EXT4_INCOMPAT;
    flex_bg = 0;
    if((sb.s_feature_incompat & INCOMPAT_FLEX_BG) != 0) {
        flex_bg = 1;
        flex_bg_size = 1UL << sb.s_log_groups_per_flex;
    }
    
    is64bit = 0;
    if((sb.s_feature_incompat & INCOMPAT_64BIT) != 0) is64bit = 1;
    else sb.s_desc_size = 32;
    if(sb.s_desc_size != 32 && sb.s_desc_size != 64) return EXT4_INVALID_PARAMS;
    
    if(sb.s_def_hash_version != 1) return EXT4_INVALID_PARAMS;
    
    printf("FS Flags: ");
    if(metadata_csums) printf("Metadata checksums | ");
    if(gdt_csums) printf("GDT checksums | ");
    if(flex_bg) printf("Flexible BGs | ");
    if(sparse_super) printf("Sparse SBs | ");
    if(has_huge_files) printf("Huge files | ");
    if(orphans_in_file) printf("Orphan file | ");
    if(is64bit) printf("64-bit | ");
    printf("\r\n");
    
    {
		ext4_DIR dhandle;
		if(ext4_open_dir(2, &dhandle)) return EXT4_BAD_ROOT_DIR;
		else {
			if(dhandle.dot_inode != 2 || dhandle.dotdot_inode != 2) return EXT4_BAD_ROOT_DIR;
		}
    }
    
    ext4_test_list_dir(2);
    return EXT4_OKAY;
}
