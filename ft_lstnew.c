#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_list;

	if(!(new_list = (t_list*)malloc(sizeof(new_list) *content_size)))
		return (NULL);
	if (content)
	{
		new_list->content = (void*)content;
		new_list->content_size = content_size;
		new_list->next = NULL;
	}
	else
	{
		new_list->content = NULL;
		new_list->content = 0;
		new_list->next = NULL;
	}
	return (new_list);
}
