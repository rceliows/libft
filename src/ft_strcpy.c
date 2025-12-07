#include "../inc/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*dest_ptr;

	if (!dest || !src)
		return (dest);
	dest_ptr = dest;
	while (*src)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
