#include <stdint.h>

#include "tholinstd.h"
#include "i2c.h"
#include "rtc.h"

uint8_t rtc_raw_buff[19];

uint8_t rtc_write_regs(uint8_t *buff, uint8_t reg, uint8_t len) {
	i2c_begin();
	uint8_t ack = i2c_transfer(RTC_ADDRESS);
	if(ack != ACK) goto rtc_write_err;
	ack = i2c_transfer(reg & 0x0F);
	if(ack != ACK) goto rtc_write_err;
	for(uint8_t i = 0; i < len; i++) {
		ack = i2c_transfer(buff[i]);
		if(ack != ACK) goto rtc_write_err;
	}
	i2c_end();
	return 0;
rtc_write_err:
	i2c_end();
	return 1;
}

uint8_t rtc_read_regs(uint8_t *buff, uint8_t reg, uint8_t len) {
	i2c_begin();
	uint8_t ack = i2c_transfer(RTC_ADDRESS);
	if(ack != ACK) goto rtc_read_err;
	ack = i2c_transfer(reg & 0x0F);
	if(ack != ACK) goto rtc_read_err;
	i2c_restart();
	ack = i2c_transfer(RTC_ADDRESS|1);
	if(ack != ACK) goto rtc_read_err;
	for(uint8_t i = 0; i < len; i++) {
		buff[i] = i2c_receive(i != len - 1 ? ACK : NACK);
	}
	i2c_end();
	return 0;
rtc_read_err:
	i2c_end();
	return 1;
}

uint8_t rtc_get_time(struct Datetime *time) {
	uint8_t ack = rtc_read_regs(rtc_raw_buff, 0, 19);
	if(ack) return ack;
	time->year = 2000;
	if((rtc_raw_buff[5] & 128) == 128) time->year += 100;
	time->year += (uint16_t)(rtc_raw_buff[6] >> 4) * 10;
	time->year += rtc_raw_buff[6] & 0x0F;
	time->date = (rtc_raw_buff[4] >> 4) * 10 + (rtc_raw_buff[4] & 0x0F);
	time->month = ((rtc_raw_buff[5] >> 4) & 0x07) * 10 + (rtc_raw_buff[5] & 0x0F);
	time->second = (rtc_raw_buff[0] >> 4) * 10 + (rtc_raw_buff[0] & 0x0F);
	time->minute = (rtc_raw_buff[1] >> 4) * 10 + (rtc_raw_buff[1] & 0x0F);
	if((rtc_raw_buff[2] & 64) == 64) {
		time->hour = ((rtc_raw_buff[5] >> 2) & 0x01) * 10 + (rtc_raw_buff[2] & 0x0F);
		if((rtc_raw_buff[2] & 32) == 32) time->hour += 12;
	}else time->hour = ((rtc_raw_buff[5] >> 2) & 0x03) * 10 + (rtc_raw_buff[2] & 0x0F);
	time->day = rtc_raw_buff[3] & 0x07;
	
	time->unix_time = 946681200; //1st January 2000, 00:00
	time->unix_time += time->second;
	time->unix_time += time->minute * 60;
	time->unix_time += time->hour * 60 * 60;
	time->unix_time += (time->date - 1) * 24 * 60 * 60;
	for(int i = 1; i < time->month; i++) {
		if(i == 2) {
			time->unix_time += 28 * 24 * 60 * 60;
			if((time->year & 0x03) == 0) time->unix_time += 24 * 60 * 60;
			continue;
		}
		time->unix_time += ((i & 1) == 0 ? 30 : 31) * 24 * 60 * 60;
	}
	for(int i = 0; i < time->year; i++) {
		time->unix_time += 365 * 24 * 60 * 60;
		if((i & 0x03) == 0) time->unix_time += 24 * 60 * 60;
	}
	return 0;
}

uint8_t rtc_set_time(struct Datetime *time) {
	if(time->year < 2000 || time->year >= 2199 || time->second > 59 || time->minute > 59 || time->hour > 23 || time->date == 0 || time->date > 31 || time->day == 0) return 2;
	uint16_t year_rel = time->year - 2000;
	rtc_raw_buff[0] = (time->second % 10) | ((time->second / 10) << 4);
	rtc_raw_buff[1] = (time->minute % 10) | ((time->minute / 10) << 4);
	rtc_raw_buff[2] = (time->hour % 10) | ((time->hour / 10) << 4); //Has side effect of configuring 24-hour mode
	rtc_raw_buff[3] = time->day;
	rtc_raw_buff[4] = (time->date % 10) | ((time->date / 10) << 4);
	rtc_raw_buff[5] = (time->month % 10) | ((time->month / 10) << 4);
	if(year_rel >= 100) {
		rtc_raw_buff[5] |= 128;
		year_rel -= 100;
	}
	rtc_raw_buff[6] = (year_rel % 10) | ((year_rel / 10) << 4);
	return rtc_write_regs(rtc_raw_buff, 0, 7);
}

uint8_t rtc_configure() {
	rtc_raw_buff[0] = 0b00011000;
	return rtc_write_regs(rtc_raw_buff, 0x0E, 1);
}

uint8_t rtc_get_temperature(float *temp) {
	uint8_t ack = rtc_read_regs(rtc_raw_buff, 0x11, 2);
	if(ack) return ack;
	int8_t temp_int = (int8_t)rtc_raw_buff[0];
	*temp = (float)temp_int;
	*temp += (float)(rtc_raw_buff[1] >> 6) * 0.25f;
	return 0;
}

void rtc_time_print(struct Datetime *time) {
	switch(time->day) {
		case MONDAY:
			puts("Monday ");
			break;
		case TUESDAY:
			puts("Tuesday ");
			break;
		case WEDNESDAY:
			puts("Wednesday ");
			break;
		case THURSDAY:
			puts("Thursday ");
			break;
		case FRIDAY:
			puts("Friday ");
			break;
		case SATURDAY:
			puts("Saturday ");
			break;
		case SUNDAY:
			puts("Sunday ");
			break;
		default:
			puts("Invalid weekday ");
			break;
	}
	if((time->date % 10) == 1) printf("%dst ", time->date);
	else if((time->date % 10) == 2) printf("%dnd ", time->date);
	else if((time->date % 10) == 3) printf("%drd ", time->date);
	else printf("%dth ", time->date);
	switch(time->month) {
		case 1:
			puts("January ");
			break;
		case 2:
			puts("February ");
			break;
		case 3:
			puts("March ");
			break;
		case 4:
			puts("April ");
			break;
		case 5:
			puts("May ");
			break;
		case 6:
			puts("June ");
			break;
		case 7:
			puts("July ");
			break;
		case 8:
			puts("August ");
			break;
		case 9:
			puts("September ");
			break;
		case 10:
			puts("October ");
			break;
		case 11:
			puts("November ");
			break;
		case 12:
			puts("December ");
			break;
		default:
			puts("Invalid month ");
			break;
	}
	printf("%d, ", time->year);
	if(time->hour < 10) putchar('0');
	printf("%d:", time->hour);
	if(time->minute < 10) putchar('0');
	printf("%d:", time->minute);
	if(time->second < 10) putchar('0');
	printf("%d\r\n", time->second);
}
