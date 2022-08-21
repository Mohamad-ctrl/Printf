#include "ft_printf_lib.h"

int	lencount(unsigned int x)
{
	int	i;

	if (x == 0)
		return (1);
	i = 0;
	while (x)
	{
		x /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(unsigned int n)
{
	long	nb;
	long	len;
	char	*res;

	nb = n;
	len = lencount(nb);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
			res[len] = '0' + (nb % 10);
			nb = nb / 10;
			len--;
	}
	return (res);
}

int printuns(unsigned int x)
{
    int len;
    char *nb;

    len = 0;
    if (x == 0)
        return (write(1, "0", 1));
    else
        {
            nb = ft_itoa(x);
            len += ft_nullstr(nb);
            free(nb);
        }
        return (len);
}