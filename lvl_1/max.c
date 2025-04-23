/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:38:46 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 09:48:37 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.
#include <stdio.h>
int		max(int* tab, unsigned int len)
{
	int big = 0;
	unsigned int x = 0;
	while (x <= len)
	{
		if(tab[x] > big)
			big = tab[x];
		x++;
	}
	return(big);
}
int main ()
{
	int x[] = {2,3};
	unsigned int y = 0;
	printf("%d",max(x,y));
}