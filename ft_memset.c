/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 18:55:40 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/09 19:18:22 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	memset(void *b, int c, size_t len)
{
	unsigned char i = (unsigned char)c;
	unsigned char* p = (unsigned char*)b;
	while (len--)
	{
		*p++ = i;
	}
	return b;
}
