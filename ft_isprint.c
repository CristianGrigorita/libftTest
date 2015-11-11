/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 18:35:36 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/03 18:46:17 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (0);
	return(1);
}

int	main ()
{
	char i;

	i = '~';
	printf("se printeaza: %c \n", ft_isprint(i));
	printf("se printeaza prin man: %c \n", isprint(i));
	return (0);
}
