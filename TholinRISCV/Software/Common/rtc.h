#ifndef RTC_H_
#define RTC_H_

#define RTC_ADDRESS 0b11010000

#define SUNDAY 1
#define MONDAY 2
#define TUESDAY 3
#define WEDNESDAY 4
#define THURSDAY 5
#define FRIDAY 6
#define SATURDAY 7

struct Datetime {
	uint8_t second;
	uint8_t minute;
	uint8_t hour;
	uint8_t day;
	uint8_t date;
	uint8_t month;
	uint16_t year;
	
	uint64_t unix_time;
};

uint8_t rtc_write_regs(uint8_t *buff, uint8_t reg, uint8_t len);
uint8_t rtc_read_regs(uint8_t *buff, uint8_t reg, uint8_t len);
uint8_t rtc_get_time(struct Datetime *time);
uint8_t rtc_set_time(struct Datetime *time);
uint8_t rtc_configure();
uint8_t rtc_get_temperature(float *temp);
void rtc_time_str(struct Datetime *time, char* buffer);
void rtc_time_print(struct Datetime *time);
void rtc_from_unix(struct Datetime *time);

#endif
