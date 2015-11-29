
#include "libft.h"

char	*ft_strmap(char const *s, char  (*f)(char))
{
	char	*fstr;
	int	i;

	i = 0;
	if (!(fstr = (char*)malloc(sizeof(*fstr) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s1[i])
	{
		fstr[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (fstr);
}
