#include "../inc/libft.h"

int	ft_putuns(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putuns(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
