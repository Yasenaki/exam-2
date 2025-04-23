/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 08:41:36 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 08:57:18 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : last_word
// Expected files   : last_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its last word followed by a \n.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or there are no words, display a newline.

// Example:

// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
#include <unistd.h>
#include <stdio.h>
int main (int argc, char ** argv)
{
	int len = 0;
	int flag = 0;
	if(argc != 2)
		write(1,"\n",1);
	else
	{
		while(argv[1][len])
		{
				len++;
		}
		len = len -1;
		while(argv[1][len])
		{
			if(argv[1][len] != ' ')
			{
				flag = 1;
			}
			if (flag == 1 && argv[1][len] == ' ')
				break;
			len --;
		}
		len ++;
		while(argv[1][len] && argv[1][len] != ' ')
		{
			write(1,&argv[1][len],1);
			len ++;
		}
		write(1,"\n",1);
	}
}