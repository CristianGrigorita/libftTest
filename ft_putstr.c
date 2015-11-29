
#include "libft.h"

void	ft_putstr(const char *s)
{
	int i;

	i = 0;
	while (s[1])
	{
		ft_putchar(s[i]);
		i++;
	}
}

