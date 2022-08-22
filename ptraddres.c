#include "ft_printf_lib.h"

int ptrlen(uintptr_t nb)
{
    int len;

    len = 0;
    while (nb != '\0')
    {
        len++;
        nb /= 16;
    }
    return (len);
}

void ptrprocess(uintptr_t nb)
{
    if (nb >= 16)
    {
        ptrprocess(nb / 16);
        ptrprocess(nb % 16);
    }
    else
    {
        if (nb <= 9)
            printc((nb + '0'));
        else 
            printc((nb - 10 + 'a'));
    }
}

int voidptr(unsigned long long ptr)
{
    int len;

    len = 0;
    len += write(1, "0x", 2);
    if (ptr == 0)
        len += write(1, "0", 1);
    else
    {
        ptrprocess(ptr);
        len += ptrlen(ptr);
    }
    return (len);
}