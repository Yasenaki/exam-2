/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:43:12 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/22 10:52:46 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int	ft_atoi(const char *str)
{
	int x = 0;
	int cnt = 1;
	int nb = 0;
	while((str[x]>= '\t' && str[x]<= '\v') && str[x]== ' ')
		x++;
	if(str[x] == '+' || str[x]== '-')
	{
		if(str[x]== '-')
			cnt = cnt *-1;
		x++;
	}	
	while(str[x]>= '0' && str[x]<= '9')
	{
		nb = nb *10 + (str[x] - '0');
		x++;
	}
	nb = nb * cnt;
	return (nb);
}
int main()
{
	char str[] = "-12354465";
	printf("%d\n",ft_atoi(str));
	printf("%d\n",atoi(str));
}