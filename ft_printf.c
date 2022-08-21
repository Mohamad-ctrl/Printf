/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawadh <hawadh@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:20:08 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/21 18:15:21 by hawadh           ###   ########.fr       */
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

    // printf("the char is : %c", op);
    if (op == 's')
		len = ft_putstr(va_arg(*lst, char *));
    else if (op == '%')
		len = ft_putstr("%");
	else if (op == 'c')
		len = printc(va_arg(*lst, int));
	else if (op == 'i' || op == 'd')
		len = ft_putnbr(va_arg(*lst, int));
    return (len);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int x;

    va_start(args, str);
    x = 0;
    while (str[x])
    {
        if (str[x] == '%')
        {
            conv(&args, str[x + 1]);
            x++;
        }
        else
            printc(str[x]);
        x++;
    }
    va_end(args);
    return (0);
}

int main(void)
{
    char *x = "hey";
	int y = 22;
    ft_printf(":%d %s my name is %% spyro:", y, x);
}