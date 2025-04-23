/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 06:30:24 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 06:49:41 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);

#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t cnt;
	size_t len;

	cnt = 0;
	len = 0;
	while (s[cnt] != '\0')
	{
		len = 0;
		while (reject[len] != '\0')
		{
			if (s[cnt] == reject[len])
				return (cnt);
			len++;
		}
		cnt++;
	}
	return (cnt);
}
int main()
{
	char  str [] = "abcd";
	char  str2 [] = " ";
	printf("original = %lu\n",strcspn(str,str2));
	printf("meu = %lu\n",ft_strcspn(str,str2));
}