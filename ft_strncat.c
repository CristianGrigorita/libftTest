#include	"libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t len;
	size_t i;

	if (s1 == NULL || S2 == NULL)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (i < n && s2[i])
	{
		s1[len] = ((char *)s2)[i]
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
