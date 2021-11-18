#include "types.h"

int
kern_entry()
{
  char *input = (char*)0xB8000;
  char color = (0<<4) | (15&0x0F);
  *input++ = 'T';
  *input++ = color;
  return 0;
}
