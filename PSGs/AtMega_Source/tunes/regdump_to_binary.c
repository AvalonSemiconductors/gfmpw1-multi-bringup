#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <argp.h>

static struct argp_option options[] = {
	{ "if", 'i', "FILE", 0, "Input file."},
	{ "of", 'o', "FILE", 0, "Output file."},
	{ "stereo", 's', 0, 0, "Stereo SID file"},
	{ 0 }
};

struct arguments {
	int stereo;
	char *input_file;
	char *output_file;
};

static error_t parse_opt(int key, char *arg, struct argp_state *state) {
	struct arguments *arguments = state->input;
	
	switch(key) {
		case 's':
			arguments->stereo = 1;
			break;
		case 'o':
			arguments->output_file = arg;
			break;
		case 'i':
			arguments->input_file = arg;
			break;
		default:
			return ARGP_ERR_UNKNOWN;
	}
	return 0;
}

static struct argp argp = { options, parse_opt, 0, 0 };

int main(int argc, char **argv) {
	struct arguments arguments;
	arguments.stereo = 0;
	arguments.output_file = 0;
	arguments.input_file = 0;
	argp_parse(&argp, argc, argv, 0, 0, &arguments);
	
	if(arguments.output_file == 0 || arguments.input_file == 0) {
		printf("Missing required arguments\n");
		return 1;
	}
	
	FILE *infile = fopen(arguments.input_file, "rb");
	FILE *outfile = fopen(arguments.output_file, "wb");
	
	if(!infile || !outfile) {
		printf("Error opening file\n");
		if(infile) fclose(infile);
		if(outfile) fclose(outfile);
		return 1;
	}
	
	fwrite(&arguments.stereo, 1, 1, outfile);
	
	long lastTime = -1;
	long accumDiff = 0;
	char lineBuffer[128];
	char end = 0;
	long fpos = 0;
	long currTime;
	int addr;
	int val;
	unsigned char dbuff[6];
	while(1) {
		for(int i = 0; i < 128; i++) lineBuffer[i] = 0;
		fread(lineBuffer, 1, 128, infile);
		int lineEnd = 0;
		for(int i = 0; i < 128; i++) {
			fpos++;
			if(lineBuffer[i] == '\n') {
				lineBuffer[i] = 0;
				fseek(infile, fpos, SEEK_SET);
				break;
			}else if(lineBuffer[i] == 0) {
				end = 1;
			}
		}
		if(strlen(lineBuffer) == 0) break;
		char* parts[3];
		parts[0] = lineBuffer;
		parts[1] = 0;
		parts[2] = 0;
		for(int i = 0; i < 128; i++) {
			if(lineBuffer[i] == '-') {
				lineBuffer[i] = 0;
				if(parts[1]) {
					parts[2] = lineBuffer + i + 1;
					break;
				}else parts[1] = lineBuffer + i + 1;
			}else if(lineBuffer[i] == 0) {
				printf("Invalid formating on line \"%s\"\n", lineBuffer);
				fclose(outfile);
				fclose(infile);
				return 1;
			}
		}
		currTime = atol(parts[0]);
		addr = atoi(parts[1]);
		val = atoi(parts[2]);
		if(lastTime < 0) lastTime = currTime;
		
		long diff = currTime - lastTime;
		diff *= 20;
		diff /= 8;
		while(diff > 65535) {
			dbuff[0] = 254;
			dbuff[1] = 0;
			dbuff[2] = dbuff[3] = 255;
			fwrite(dbuff, 1, 4, outfile);
			diff -= 65535;
		}
		lastTime = currTime;
		dbuff[0] = addr;
		dbuff[1] = val;
		fwrite(dbuff, 1, 2, outfile);
		if(diff < 16 && accumDiff < 300) accumDiff += diff;
		else {
			diff += accumDiff;
			dbuff[0] = 254;
			dbuff[1] = 0;
			dbuff[2] = diff >> 8;
			dbuff[3] = diff;
			accumDiff = 0;
			fwrite(dbuff, 1, 4, outfile);
		}
		
		if(end) break;
	}
	dbuff[0] = 254;
	dbuff[1] = 0;
	dbuff[2] = dbuff[3] = dbuff[4] = 255;
	dbuff[5] = 0;
	fwrite(dbuff, 1, 6, outfile);
	
	fclose(infile);
	fclose(outfile);
	return 0;
}
