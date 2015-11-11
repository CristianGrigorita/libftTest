/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:54:44 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/09 16:39:46 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return(1);
	return (0);
}

int	main ()
{
	char i;
	int z;
	int x;

	i = '1';
	z = ft_isalpha(i);
	x = isalpha(i);
	printf("Este alpha: %c \n", z);
	printf("Este alpha man: %c \n", x);
//	return (0);
}
