/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 08:09:13 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 08:34:57 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);

#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t cnt = 0;
	int x = 0;
	int y = 0;
	int flag = 0;
	while (s[x])
	{
		y = 0;
		flag = 0;
		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				cnt++;
				flag = 1;
			}
			y++;
		}
		if (flag == 0)
			break;
		x++;
	}
	return (cnt);
}
int main()
{
	char str1[] = "aabaa2222aa";
	char str2[] = "ab";
	printf("meu = %lu\n", ft_strspn(str1, str2));
	printf("original = %lu\n", strspn(str1, str2));
}
