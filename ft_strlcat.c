#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;
	size_t len1;

	if (dst == NULL || src == NULL || size == 0)
		return (0);
	i = 0;
	len = 0;
	len1 = ft_strlen(dst);
	while (dst[len] && len < size)
		len++;
	if (!(len < size))
		return (size + ft_strlen(src));
	while (src[i] && i < (size - len1 - 1))
	{
		dst[len + 1] = ((char *)src)[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
