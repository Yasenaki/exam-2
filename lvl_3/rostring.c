/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:58:04 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/29 17:50:37 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// la lumiere soit et la lumiere fut Que$
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>

#include <unistd.h>
#include <stdio.h>

void ft_writestr(char *str, int start, int end)
{
	int x = start;
	while (x < end)
	{
		while ((str[x] == ' ' || str[x] == '\t') && str[x] != '\0' && x < end)
		{
			x++;
		}
		while (x < end)
		{
			
			if (str[x] == ' ' || str[x] == '\t')
			{
				write(1, " ", 1);
				break;
			}
			else
				write(1, &str[x], 1);
			x++;
		}
		x++;
	}
	if (start != end)
		write(1, " ", 1);
}
void ft_firstw(char *str, int end)
{
	int x = 0;
	int flag = 0;
	int word = 0;
	while (x < end + 1)
	{
		while ((str[x] == ' ' || str[x] == '\t') && str[x] != '\0' && x < end)
		{
			flag = 1;
			x++;
		}
		word = 1;
		while ((str[x] != ' ' || str[x] != '\t') && word == 1 && x < end)
		{
			write(1, &str[x], 1);
			x++;
		}
		if (word == 1 && flag == 1 && x + 1 < end)
		{
			write(1, " ", 1);
			flag = 0;
		}
		x++;
	}
}
int main(int argc, char **argv)
{
	int end = 0;
	int len = 0;
	if (argc > 1)
	{
		while (argv[1][end] == ' ' || argv[1][end] == '\t')
			end++;
		end++;
		while (argv[1][end])
		{
			if (argv[1][end] == ' ' || argv[1][end] == '\t')
				break;
			end++;
		}
		while (argv[1][len])
			len++;
		ft_writestr(argv[1], end, len);
		ft_firstw(argv[1],end);
	}
	write(1, "\n", 1);
}