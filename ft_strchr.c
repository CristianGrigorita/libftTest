/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 17:06:50 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/09 18:03:16 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
				return ((char*)s);
		s++;
	}
	if (*s == (char)c)
			return ((char *)s);
	else
			return (NULL);
}

int	main ()
{
	char str[] = "this is it";
	char *a;
	char *j;

	a = strchr (str, 's');
	j = ft_strchr(str, 'h');
	printf("dupa functia din man: %s\n", a);
	printf("dupa ft: %s\n", j);
	return (0);
}
