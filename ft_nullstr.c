#include "ft_printf_lib.h"

int ft_nullstr(char *s)
{
    int len;

    len = 0;
    if (s == NULL)
        return (write(1, "(null)", 6));
    while (s[len])
    {
        write(1, &s[len], 1);
        len++;
    }
    return (len);
}