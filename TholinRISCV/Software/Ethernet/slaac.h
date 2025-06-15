#ifndef SLAAC_H_
#define SLAAC_H_

uint8_t slaac_configure(uint8_t do_dns, const char* hostname);
uint8_t slaac_handle_router_advertisement(IPv6Header hdr);

extern volatile uint32_t slaac_lifetime;

#endif
