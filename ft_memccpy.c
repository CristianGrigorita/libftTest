#include	"libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *tmp1;
	unsigned char *tmp2;
	size_t	i;

	tmp1 = (unsigned char *) dest;
	tmp2 = (unsigned char *) src;
	i = 0;
	c = (unsigned char) c;
	while (i < n)
	{
		if ((*tmp1++ = *tmp2++) == c)
			return (tmp1);
		i++;
	}
	return (NULL);
}
