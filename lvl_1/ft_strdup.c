/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 06:50:31 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 07:07:10 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int len = 0;
	int x = 0;
	char *dest;
	while (src[len] != '\0')
		len++;
	dest = malloc(sizeof (char)*len +1);
	if(!dest)
	{
		free (dest);
		return(0);
	}	
	else
	{
		while(src[x] != '\0')
		{
			dest[x] = src[x];
			x++;
		}
		dest[x]= '\0';
	}
	return(dest);
}
int main()
{
	char str [] = "abc";
	printf("%s",ft_strdup(str));
}
