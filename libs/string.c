#include "string.h"

void*
memset(void* dst, int c, uint32_t n)
{
  char* cdst = (char*) dst;
  int i;
  for(i = 0; i < n; i++){
    cdst[i] = c;
  }
  return dst;
}

int
memcmp(const void* v1, const void* v2,
       uint32_t n)
{
  const unsigned char *s1, *s2;
  s1 = v1;
  s2 = v2;
  while(n-- > 0){
    if(*s1 != *s2){
      return *s1 - *s2;
    }
    s1++;
    s2++;
  }
  return 0;
}

void*
memmove(void* dst, const void* src,
        uint32_t n)
{
  const char* s = src;
  char* d = dst;
  if(s < d && s + n > d){
    s += n;
    d += n;
    while(n-- > 0){
      *--d = *--s;
    }
  } else{
    while(n-- > 0){
      *d++ = *s++;
    }
  }
  return dst;
}

void*
memcpy(void* dst, const void* src, uint32_t n)
{
  return memmove(dst, src, n);
}

