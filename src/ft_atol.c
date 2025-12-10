#include "../inc/libft.h"

long	ft_atol(const char *nptr)
{
	size_t		i;
	int		neg;
	long	r;

	i = 0;
	r = 0;
	neg = 1;
	while (((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32))
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
			neg = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = r * 10;
		r = r + (nptr[i] - 48);
		i++;
	}
	r = r * neg;
	return (r);
}
