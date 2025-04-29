/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:11:13 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/26 16:09:58 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : epur_str
// Expected files   : epur_str.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays this string with exactly one
// space between words, with no spaces or tabs either at the beginning or the end,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// If the number of arguments is not 1, or if there are no words to display, the
// program displays \n.

// Example:

// $> ./epur_str "See? It's easy to print the same thing" | cat -e
// See? It's easy to print the same thing$
// $> ./epur_str " this        time it      will     be    more complex  . " | cat -e
// this time it will be more complex .$
// $> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
// $
// $> ./epur_str "" | cat -e
// $
// $>
#include <unistd.h>
int main(int argc, char **argv)
{
	int x = 0;
	int flag = 0;
	if (argc == 2)
	{
		while ((argv[1][x] == '\t' || argv[1][x] == ' ' || argv[1][x] == '\v'))
		{
			x++;
		}
		while (argv[1][x])
		{
			while((argv[1][x] == '\t' || argv[1][x] == ' ' || argv[1][x] == '\v'))
			{
				flag = 1;
				x++;
			}
				if (flag == 1)
				{
					write(1, " ", 1);
					flag = 0;
				}
				write(1, &argv[1][x], 1);
			if (!argv[1][x])
				break;
			x++;
		}
	}
	write(1, "\n", 1);
}