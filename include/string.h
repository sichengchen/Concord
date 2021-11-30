#ifndef INCLUDE_STRING_H_
  #define INCLUDE_STRING_H_
  #include "types.h"

void*
memset(void *dst, int c, uint32_t n);

int
memcmp(const void *v1, const void *v2,
       uint32_t n);

void*
memmove(void *dst, const void *src,
        uint32_t n);

void*
memcpy(void *dst, const void *src, uint32_t n);

int
strncmp(const char *p, const char *q,
        uint32_t n);

char*
strncpy(char *s, const char *t, uint32_t n);

char*
safestrcpy(char *s, const char *t, uint32_t n);

int
strlen(const char *s);

int
strcmp(const char* s1, const char* s2);

#endif
