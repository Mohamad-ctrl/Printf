#include "ft_printf_lib.h"

int hexlen(unsigned int nb)
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

void    hexprocess(unsigned int nb, const char op)
{
    if (nb >= 16)
    {
        hexprocess(nb / 16, op);
        hexprocess(nb % 16, op);
    }
    else
        {
            if (nb <= 9)
                printc((nb + '0'));
            else
                {
                    if (op == 'x')
                        printc((nb - 10 + 'a'));
                    else if (op == 'X')
                        printc((nb - 10 + 'A'));
                }
        }
}

int printhex(unsigned int nb, const char op)
{
    if (nb == 0)
        return (write(1, "0", 1));
    else 
        hexprocess(nb, op);
    return (hexlen(nb));
}