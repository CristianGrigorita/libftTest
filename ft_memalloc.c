
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *adr;

	if (!(adr = (void*)malloc(size)))
		return (NULL);
	return (adr);
}
