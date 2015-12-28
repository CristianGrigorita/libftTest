/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 16:26:49 by cgrigori          #+#    #+#             */
/*   Updated: 2015/12/28 17:34:51 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nr_digits(int n)
{
	static int digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digits++;
	while (n)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		digits;
	int		i;
	long	copy;

	copy = n;
	digits = nr_digits(copy);
	result = (char*)malloc(sizeof(char) * (digits + 2));
	i = 0;
	if (copy < 0)
	{
		result[i++] = '-';
		copy = copy * (-1);
	}
	result[digits--] = '\0';
	result[digits--] = copy % 10 + 48;
	copy /= 10;
	while (copy)
	{
		result[digits--] = copy % 10 + 48;
		copy /= 10;
	}
	return (result);
}
