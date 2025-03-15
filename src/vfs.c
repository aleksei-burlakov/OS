#include "vfs.h"
#include "vga_text.h"
#include "io_ports.h"

void e9_putc(char c)
{
    outportb(0xE9, c);
}

int VFS_Write(fd_t file, uint8_t* data, size_t size)
{
    switch (file)
    {
    case VFS_FD_STDIN:
        return 0;

    case VFS_FD_STDOUT:
    case VFS_FD_STDERR:
        for (size_t i = 0; i < size; i++)
            VGA_putc(data[i]);
        return size;

    case VFS_FD_DEBUG:
        for (size_t i = 0; i < size; i++)
            e9_putc(data[i]);
        return size;
    
    default:
        return -1;
    }

    return 0;
}