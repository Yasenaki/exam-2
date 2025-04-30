/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:15:25 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/29 15:46:46 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the
// begin/end of the string.

// If the number of parameters is different from 1, the program will display
// '\n'.

// In the parameters that are going to be tested, there won't be any "additional"
// spaces (meaning that there won't be additionnal spaces at the beginning or at
// the end of the string, and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>

#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int x = 0;
	int y = 0;

	if (argc == 2)
	{
		while (argv[1][x])
			x++;
		while (x > -1)
		{
			while (x > -1)
			{
				if(argv[1][x] == ' ' || argv[1][x] == '\t')
					break;
				x--;
			}
			y = x;
			y = y+1;
			while (argv[1][y])
			{
				if(argv[1][y] == ' ' || argv[1][y] == '\t')
					break;
				write(1, &argv[1][y], 1);
				y++;
			}
			if(argv[1][x] == ' ')
				write(1," ",1);
			else if(argv[1][x] == '\t')
				write(1,"\t",1);
			x--;
		}
	}
	write(1, "\n", 1);
}