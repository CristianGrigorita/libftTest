/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrigori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 17:56:27 by cgrigori          #+#    #+#             */
/*   Updated: 2015/11/09 18:05:29 by cgrigori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "this is it";
	char *a;
	char *j;

	a = strchr (str, 's');
	j = ft_strchr (str, 'i');
	printf("dupa functia din man: %s\n", a);
	printf("dupa ft: %s\n", j);
	a = strrchr (str, 's');
	j = ft_strrchr (str, 'i');
	printf("dupa functia din man: %s\n", a);
	printf("dupa ft: %s\n", j);
	return (0);
}
