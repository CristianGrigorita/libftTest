/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 16:17:57 by cgrigori          #+#    #+#             */
/*   Updated: 2015/12/28 18:37:40 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
