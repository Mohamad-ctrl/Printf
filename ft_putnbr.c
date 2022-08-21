#include "ft_printf_lib.h"

int	ft_putnbr(int nb)
{
	int len;

	len = 0;
	// printf("the num is -> %d\n", nb);
	if (nb == -2147483648)
		return(write(1, "-2147483648", 11));
	if (nb < 0)
	{
		len += printc('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += printc(nb % 10 + 48);
	}
	else
		len += printc(nb + 48);
	return(len);
}