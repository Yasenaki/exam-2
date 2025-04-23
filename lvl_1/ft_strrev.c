/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 07:52:05 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 08:08:29 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);
#include <unistd.h>
char    *ft_strrev(char *str)
{
	int len = 0;
	int x = 0;
	char holder;
	while(str[len])
		len ++;
	len = len -1;
	while(x < len)
	{
		holder = str[x];
		str[x]= str[len];
		str[len] = holder;
		x++;
		len--;
	}
	return(str);
}

#include <stdio.h>
int main ()
{
	char str [] = "vyuevfuwvfyuwevfuywevfuyewvfueyvweuyvfe!";
	printf("%s",ft_strrev(str));
}

