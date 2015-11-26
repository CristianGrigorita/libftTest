#include "libft.h"

char	*ft_strdup(char const *s1)
{
	int len;
	char *s2;

	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * len + 1);
	if (s2 != NULL)
	{
		ft_strcpy(s2, s1);
		return (s2);
	}
	else
		return (0);
}
