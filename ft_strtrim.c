
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*copy;
	int	i;
	int	j;

	if (!(copy = (char*)malloc(sizeof(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i++;
	j = 0;
	while (s[i])
		copy[j++] = s[i++];
	copy[j] = '\0';
	j--;
	while (copy[j] == '\t' || copy[j] == '\n' || copy[j] == ' ')
		copy[j--] = '\0';
	return (copy);
}
