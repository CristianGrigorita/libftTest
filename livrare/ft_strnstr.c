/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 16:31:01 by cgrigori          #+#    #+#             */
/*   Updated: 2015/12/28 17:28:46 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!s2)
		return ((char*)s1);
	while (s1[i])
	{
		while (s2[j] && s2[j] == s1[i + j] && (i + j) < n)
			j++;
		if (s2[j] == '\0')
			return ((char*)(s1 + i));
		j = 0;
		i++;
	}
	return (NULL);
}
