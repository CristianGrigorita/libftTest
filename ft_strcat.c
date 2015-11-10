#include	"libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t j;
	size_t len1;
	size_t len2;

	if (i == NULL || j == NULL)
		return (0);
	len1 = ft_strlen(s1);
	len2 = len1 + ft_strlen(s2);
	i = 0;
	j = ft_strlen(s1);
	while (j < len2)
	{
		s1[j] = ((char *)s2)[i];
		i++;
		j++;
	}
	s1[i2] = '\0';
	return (s1);
}
