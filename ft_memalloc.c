#include	"libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = NULL;
	if (size)
	{
		ptr = (char *)malloc(sizeof(char) * size);
		if (!ptr)
			return (NULL);
		else
			ft_bzero(ptr, size);
	}
	return ((void *)ptr);
}
