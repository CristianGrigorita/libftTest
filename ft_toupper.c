/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 18:23:05 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/09 16:41:37 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include <xlocale.h>
#include <stdio.h>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return(c);
}


int	main()
{
	char i;

	i = '2';
	printf("c este: %c \n", ft_toupper(i));
	printf("c este: %c \n", toupper(i));
	return (0);
}
