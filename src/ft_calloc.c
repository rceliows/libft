#include "../inc/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	size_t			i;
	unsigned char	*ptr;

	total_size = nmemb * size;
	i = 0;
	if (total_size == 0)
		return (malloc(1));
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
