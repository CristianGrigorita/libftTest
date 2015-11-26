/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 17:14:20 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/09 18:45:39 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	int	i;

	if (s == NULL)
	{
			return (0);
	}
	else
	{
		x = ((char) c);
		i = ft_strlen(s);
		while (i > -1)
		{
			if (s[1] == x)
					return ((char *) s + i);
			i--;
		}
	}
	return (0);
}
