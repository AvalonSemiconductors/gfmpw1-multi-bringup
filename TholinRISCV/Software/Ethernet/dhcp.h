#ifndef DHCP_H_
#define DHCP_H_

extern volatile uint32_t dhcp_lease_time;

uint8_t dhcp(IPAddr s_ip, const char* hostname);

#endif
