/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 17:14:20 by cgrigori          #+#    #+#             */
/*   Updated: 2015/12/28 18:36:13 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*x;
	int			i;

	i = 0;
	x = NULL;
	while (s[i])
	{
		if (s[i] == c)
			x = s + i;
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return ((char*)x);
}
