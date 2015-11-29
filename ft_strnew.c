
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *adr;

	if (!(adr = (char *)malloc(sizeof(*adr) * size + 1)))
		return (NULL);
	if (adr)
		return (adr);
	else
		return (NULL);
}
