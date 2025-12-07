#include "../inc/libft.h"

int	ft_puthex(unsigned int n, int uppercase)
{
	int		count;
	char	*hex;

	count = 0;
	if (uppercase)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex(n / 16, uppercase);
	count += ft_putchar(hex[n % 16]);
	return (count);
}
