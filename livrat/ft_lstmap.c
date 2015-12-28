/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 16:15:38 by cgrigori          #+#    #+#             */
/*   Updated: 2015/12/28 18:37:22 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	tmp = f(lst);
	new = tmp;
	if (new == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (new);
}
