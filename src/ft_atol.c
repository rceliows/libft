#include "../inc/libft.h"

static int	ft_sign_and_skip(const char *nptr, size_t *i)
{
	int	sign;

	sign = 1;
	while ((nptr[*i] >= 9 && nptr[*i] <= 13) || nptr[*i] == 32)
		(*i)++;
	if (nptr[*i] == '-' || nptr[*i] == '+')
	{
		if (nptr[*i] == '-')
			sign = -1;
		(*i)++;
	}
	return (sign);
}

long	ft_atol(const char *nptr)
{
	size_t	i;
	int		sign;
	long	result;
	int		digit;

	i = 0;
	result = 0;
	sign = ft_sign_and_skip(nptr, &i);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		digit = nptr[i] - '0';
		if (sign == 1 && result > (LONG_MAX - digit) / 10)
			return (LONG_MAX);
		if (sign == -1 && -result < (LONG_MIN + digit) / 10)
			return (LONG_MIN);
		result = result * 10 + digit;
		i++;
	}
	return (result * sign);
}
