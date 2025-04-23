/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 07:07:44 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 07:40:00 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

#include <unistd.h>
#include <string.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
			if(*s1 == *s2)
				return ((char *)s1);
		s1++;
	}
	return(NULL);
}
#include <stdio.h>
int main()
{
	char str [] = "abcd";
	char str2 [] = "";
	printf("meu = %s \n",ft_strpbrk(str,str2));
	printf("original = %s\n",strpbrk(str,str2));
}