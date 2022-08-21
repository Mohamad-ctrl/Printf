/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawadh <hawadh@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:21:08 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/21 18:15:01 by hawadh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_LIB_H
# define FT_PRINTF_LIB_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>


int ft_printf(const char *, ...);
int printc(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int ft_nullstr(char *s);
int printuns(unsigned int x);
int printhex(unsigned int nb, const char op);
int voidptr(unsigned long long ptr);

#endif
