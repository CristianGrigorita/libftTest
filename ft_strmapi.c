
#include "libft.h"

char	*ft_strmapi(char const *s1, char(*f)(unsigned int, char))
{
	unsigned int	i;
	char	*fstr;

	i = 0;
	if (!(fstr = (char *)malloc(sizeof(*fstr) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s1[i])
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
