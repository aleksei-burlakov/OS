#include "e9.h"
#include "io_ports.h"

void e9_putc(char c)
{
    outportb(0xE9, c);
}
