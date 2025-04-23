/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 08:36:15 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 08:40:21 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2, otherwise it returns 0.

// Your function must be declared as follows:

// int	    is_power_of_2(unsigned int n);
#include <unistd.h>

int	    is_power_of_2(unsigned int n)
{
	if(n % 2 == 0 || n == 1)
		return (1);
	else 
		return (0);
}
#include <stdio.h>
int main()
{
	unsigned int x = 1;
	printf("%d", is_power_of_2(x));
}