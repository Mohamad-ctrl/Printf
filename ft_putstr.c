#include "ft_printf_lib.h"

int	ft_putstr(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		write(1, &s[x], 1);
		x++;
	}
	return (x);
}