#ifndef DNS_H_
#define DNS_H_

uint8_t dns_query(const char *hostname, IPAddr *res, uint8_t ipv6);

#endif
