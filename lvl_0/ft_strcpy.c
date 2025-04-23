/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:18:10 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/21 14:31:19 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);
//char *strcpy(char *dest, const char *src);
char    *ft_strcpy(char *s1, char *s2)
{
	int x = 0;
	while(s2[x] != '\0')
	{
		s1[x] = s2[x];
		x++;
	}
	s1[x] = '\0';
	return (s1);	
}
#include <unistd.h>
#include <stdio.h>

int main()
{
	char str[34];
	char str2[] = "WOOOP  ooooo 009090 90904923 __ 0";
	ft_strcpy(str,str2);
	printf("%s",str);
}