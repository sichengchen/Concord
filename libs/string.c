#include "string.h"

void
memset(uint8_t* dest, uint8_t val, uint32_t len)
{
  uint8_t* dst = (uint8_t*)dest;
  while(len--){
    *dst++ = val;
  }
}