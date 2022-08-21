/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawadh <hawadh@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:50:23 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/21 14:41:10 by hawadh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf_lib.h"

int main(void)
{
    int age = 20;
    char *lo = "UAE";
    char l = 'm';
    ft_printf("hey this is my age :%d: and this is my name :%s: and this is where I live and this is the first letter of my name :%c:\n", age, lo, l);
    printf("hey this is my age :%d: and this is my name :%s: and this is where I live and this is the first letter of my name :%c:\n", age, lo, l);
    char *p;
    p = "22";
    printf("the adress is -> %p\n", &p);
    ft_printf("the adress is -> %p\n", &p);
}
