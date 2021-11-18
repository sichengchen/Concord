#include "types.h"

int
kern_entry()
{
  unsigned char *input = (unsigned char*)0xB8000;
  unsigned char color = (0<<4) | (15&0x0F);
  *input++ = 'T';
  *input++ = color;
  return 0;
}
