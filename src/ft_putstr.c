#include "../inc/libft.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (*s)
		count += ft_putchar(*s++);
	return (count);
}
