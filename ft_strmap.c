
#include "libft.h"

char	*ft_strmap(char const *s, char  (*f)(char))
{
	char	*fstr;
	int	i;

	i = 0;
	if (!(fstr = (char*)malloc(sizeof(*fstr) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		fstr[i] = f(s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
