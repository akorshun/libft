#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((unsigned char *)src)[i] != c)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (((unsigned char *)src)[i] == (unsigned char)c)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		return (dest + i + 1);
	}
	return (NULL);
}
