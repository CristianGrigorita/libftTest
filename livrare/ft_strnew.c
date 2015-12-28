/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 16:30:13 by cgrigori          #+#    #+#             */
/*   Updated: 2015/12/28 18:23:18 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *adr;

	if (!(adr = (char *)malloc(sizeof(*adr) * (size + 1))))
		return (NULL);
	adr = (char*)ft_memset(adr, 0, size + 1);
	return (adr);
}
