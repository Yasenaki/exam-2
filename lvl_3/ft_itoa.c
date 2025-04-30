/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:01:50 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/29 15:11:09 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);
#include <unistd.h>

static size_t	putnb(int b)
{
	size_t	i;
	size_t	buf;

	buf = b;
	i = 1;
	if (b < 0)
	{
		buf = -buf;
		i++;
	}
	while (buf / 10 > 0)
	{
		buf /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*out;
	size_t	i;
	long	holder_number;

	holder_number = n;
	i = putnb(n);
	out = (char *)malloc(i + 1);
	if (!out)
		return (NULL);
	if (holder_number < 0)
	{
		out[0] = '-';
		holder_number = -holder_number;
	}
	if (holder_number == 0)
		out[0] = '0';
	out[i] = '\0';
	i--;
	while (i >= 0 && holder_number > 0)
	{
		out[i] = (holder_number % 10) + '0';
		holder_number /= 10;
		i--;
	}
	return (out);
}