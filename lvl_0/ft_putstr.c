/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:11:42 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/21 14:17:45 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_putstr
// Expected files   : ft_putstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays a string on the standard output.

// The pointer passed to the function contains the address of the string's first
// character.

// Your function must be declared as follows:

// void	ft_putstr(char *str);

#include <unistd.h>
void	ft_putstr(char *str)
{
	int x = 0;
	while(str[x])
		write(1,&str[x++],1);
}
int main()
{
	char *str = "WOOOP  ooooo 009090 90904923 __ 0";
	ft_putstr(str);
}
