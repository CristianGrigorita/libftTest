/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:27:55 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/09 16:40:38 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>

int	ft_tolower(int c)
{
		if (c >= 'A' && c <= 'Z')
			c = c + 32;
	return(c);
}


int	main()
{
	char i;

	i = '2';
	printf("str este: %c \n", ft_tolower(i));
	printf("str man este: %c \n", tolower(i));
	return (0);
}
