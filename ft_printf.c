/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:20:08 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/15 09:20:13 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf_lib.h"

int conv(va_list lst ,char op)
{
    
    // printf("the char is : %c", op);
    if (op == 'c')
    {
        ft_putchar(lst);
    }
    
    return (0);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int x;

    // va_start(args, str);
    x = 0;
    while (str[x] != '\0')
    {
        if (str[x] == '%')
        {
            char i = va_start(args, str);
            conv(i, str[x + 1]);
            i += 1;
        }
        // else
        //     ft_putchar(str[x]);
        x++;
    }
    va_end(args);
    return (0);
}



int main(void)
{
    char x = 'x';
    ft_printf("%c", x);
}