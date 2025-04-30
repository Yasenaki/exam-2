/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:53:23 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/30 13:56:40 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : print_hex
// Expected files   : print_hex.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	if (str[0] == '-')
		return (0);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - 48;
		else
			return (0);
		i++;
	}
	return (res);
}


void	num_hex(int num)
{
    int *holder = 0;
	char hex[] = "0123456789ABCDEF";
    int x = 0;
	if (num >= 16)
		num_hex(num / 16);
	num = num % 16;
    holder = hex[num % 16];
    while(holder[x])
	    write(1,&holder[x++],1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	num_hex(ft_atoi(argv[1]));
}