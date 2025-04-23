/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:45:39 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/21 15:03:10 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>

#include <unistd.h>
int main(int argc , char **argv)
{
	int x = 0;
	int y = 0;
	if(argc != 2)
	{
		write(1,"\n",1);
	}
	else
	{
		while(argv[1][x])
		{
			if(argv[1][x] >= 'a' && argv[1][x] <='z')
				y = ((argv[1][x] - 'a')) +1;
			else if(argv[1][x] >= 'A' && argv[1][x] <='Z')
				y = ((argv[1][x] - 'A')) +1;
			else
				write(1,&argv[1][x],1);
			while(y > 0)
			{
				write(1,&argv[1][x],1);
				y--;
			}
			x++;
		}
			write(1,"\n",1);
	}
}