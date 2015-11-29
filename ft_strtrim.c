
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*copy;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(copy = (char*)malloc(sizeof(s) + 1)))
		return (NULL);
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i++;
	while (s[i])
		copy[j] = s[i];
		j++;
		i++;
	copy[j] = '\0';
	j--;
	while (copy[j] == '\t' || copy[j] == '\n' || copy[j] == ' ')
		copy[j] = '\0';
		j--;
	return (copy);
}
