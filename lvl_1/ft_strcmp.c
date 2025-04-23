/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:59:09 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/22 11:15:45 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);
//    • 0, if the s1 and s2 are equal;

//        • a negative value if s1 is less than s2;

//        • a positive value if s1 is greater than s2.


int    ft_strcmp(char *s1, char *s2)
{
	int x = 0;
	while(s1[x] && s2[x])
	{
		if(s1[x] > s2[x])
		{
			return (1);
		}
		else if(s1[x] < s2[x])
		{
			return (-1);
		}
		x++;
	}
	if(s1[x] || s2[x])
	{
		if(s1[x] && s2[x])
			return(0);
		else if(s1[x])
			return(1);
		else if(s2[x])
			return(-1);
	}
	return(0);
}
#include <stdio.h>
int main()
{
	char str1[] = "abc";
	char str2[] = "abc ";
	printf("%d",ft_strcmp(str1,str2));
}