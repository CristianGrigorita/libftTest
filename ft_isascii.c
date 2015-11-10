/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 18:46:52 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/03 18:55:53 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (0);
	return(1);
}

int main()
{
	char i;

	i = '1';
	printf("este ascii: %c \n", ft_isascii(i));
	printf("este ascii conform man: %c \n", isascii(i));
	return (0);
} 
