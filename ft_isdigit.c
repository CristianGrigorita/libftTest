/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:43:07 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/09 16:41:32 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9');
		return (1);
	return (0);
}

int	main()
{
	int i;

	i = "A";
	printf("este numar: %d \n", ft_isdigit(i));
	printf("este numar prin man: %d \n", isdigit(i));
}
