/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:42:07 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/21 14:45:18 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int holder;
	holder = *a;
	*a = *b;
	*b = holder;
}
#include <stdio.h>
int main ()
{
	int x,y;
	x = 4;
	y = 5;
	ft_swap(&x,&y);
	printf("x = %d  y = %d", x ,y);
}
