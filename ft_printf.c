/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawadh <hawadh@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:20:08 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/22 13:23:24 by hawadh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_lib.h"

int printc(int c)
{
	return(write(1, &c, 1));
}

int conv(va_list *lst ,char op)
{
	int len;

    len = 0;
    if (op == 's')
		len += ft_putstr(va_arg(*lst, char *));
    else if (op == '%')
		len += ft_putstr("%");
	else if (op == 'c')
		len += printc(va_arg(*lst, int));
	else if (op == 'i' || op == 'd')
		len += ft_putnbr(va_arg(*lst, int));
    else if (op == 'x' || op == 'X')
        len += printhex(va_arg(*lst, unsigned int), op);
    else if (op == 'u')
        len += printuns(va_arg(*lst, unsigned int));
    else if (op == 'p')
        len += voidptr(va_arg(*lst, unsigned long long));
    return (len);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int x;
    int len;

    va_start(args, str);
    x = 0;
    len = 0;
    while (str[x])
    {
        if (str[x] == '%')
        {
            if (str[x + 1] == 32)
                len += printc('%');
            else
                len += conv(&args, str[x + 1]);
            x++;
        }
        else
            len += printc(str[x]);
        x++;
    }
    va_end(args);
    return (len);
}

// int main(void)
// {
//     char *p;
//     p = "22";

//     printf("the adress is -> %p\n", &p);
//     ft_printf("the adress is -> %p\n", &p);
// }