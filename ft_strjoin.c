
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str12;
	int	i;
	int	j;

	i = 0;
	j = 0;
	str12 = (char *)malloc(sizeof(*str12) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str12)
		return (NULL);
	while (s1[i])
	{
		str12[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str12[j] = s2[i];
		j++;
		i++;
	}
	str12[j] = '\0';
	return (str12);
}
