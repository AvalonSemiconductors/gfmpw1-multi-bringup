#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <argp.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <time.h>
#include <errno.h>

static struct argp_option options[] = {
	{ "if", 'i', "FILE", 0, "Input file" },
	{ "stereo", 's', 0, 0, "Stereo SID file"},
	{ "div", 'd', 0, 0, "Delay times are just too long!"},
	{ "port", 'p', "FILE", 0, "UART port" },
	{ 0 }
};

struct arguments {
	char *input_file;
	char *port;
	int stereo;
	int div;
};

static error_t parse_opt(int key, char *arg, struct argp_state *state) {
	struct arguments *arguments = state->input;
	
	switch(key) {
		case 'i':
			arguments->input_file = arg;
			break;
		case 'p':
			arguments->port = arg;
			break;
		case 's':
			arguments->stereo = 1;
			break;
		case 'd':
			arguments->div = 1;
			break;
		default:
			return ARGP_ERR_UNKNOWN;
	}
	return 0;
}

static struct argp argp = { options, parse_opt, 0, 0 };

int main(int argc, char **argv) {
	struct arguments arguments;
	arguments.input_file = 0;
	arguments.port = 0;
	arguments.stereo = 0;
	arguments.div = 0;
	argp_parse(&argp, argc, argv, 0, 0, &arguments);
	if(arguments.input_file == 0 || arguments.port == 0) {
		printf("Missing required arguments\n");
		return 1;
	}
	FILE *infile = fopen(arguments.input_file, "rb");
	if(!infile) {
		printf("Error opening file\n");
		return 1;
	}
	int fd = open(arguments.port, O_RDWR | O_NOCTTY | O_SYNC);
	if(fd < 0) {
		fclose(infile);
		printf("Error opening serial port: %s\r\n", strerror(errno));
		return 1;
	}
	struct termios tty;
	if(tcgetattr(fd, &tty) != 0) {
		fclose(infile);
		printf("Error from tcgetattr: %s\n", strerror(errno));
		return 1;
	}
	tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8;
	tty.c_iflag &= ~IGNBRK;
	tty.c_lflag = 0;
	tty.c_oflag = 0;
	tty.c_cc[VMIN] = 0;
	tty.c_cc[VTIME] = 5;
	tty.c_iflag &= ~(IXON | IXOFF | IXANY);
	tty.c_cflag |= (CLOCAL | CREAD);
	tty.c_cflag &= ~(PARENB | PARODD);
	tty.c_cflag &= ~CSTOPB;
	tty.c_cflag &= ~CRTSCTS;
	cfsetospeed(&tty, B230400);
	cfsetispeed(&tty, B230400);
	if(tcsetattr(fd, TCSANOW, &tty) != 0) {
		fclose(infile);
		printf("Error from tcsetattr: %s\r\n", strerror(errno));
		close(fd);
		return 1;
	}
	
	unsigned char buffer[2];
	buffer[0] = 'a';
	write(fd, buffer, 1);
	nanosleep((const struct timespec[]){{3, 0}}, NULL);
	
	buffer[0] = arguments.stereo ? 51 : 50;
	write(fd, buffer, 1);
	nanosleep((const struct timespec[]){{1, 0}}, NULL);
	
	long lastTime = -1;
	char lineBuffer[128];
	char end = 0;
	long fpos = 0;
	long currTime;
	int addr;
	int val;
	long error = 0;
	while(!end) {
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
				close(fd);
				fclose(infile);
				return 1;
			}
		}
		currTime = atol(parts[0]);
		addr = atoi(parts[1]);
		val = atoi(parts[2]);
		if(lastTime < 0) lastTime = currTime;
		
		long diff = currTime - lastTime;
		if(arguments.div) diff >>= 1;
		if(diff >= error) {
			diff -= error;
			error = 0;
		}
		if(diff >= 87) nanosleep((const struct timespec[]){{0, diff * 1000 - 86806}}, NULL);
		else error += diff;
		lastTime = currTime;
		buffer[0] = addr;
		buffer[1] = val;
		write(fd, buffer, 2);
	}
	buffer[0] = 255;
	buffer[1] = 0;
	write(fd, buffer, 2);
	close(fd);
	fclose(infile);
	
	return 0;
}
