/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:24:46 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/21 12:24:47 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : first_word
// Expected files   : first_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its first word, followed by a
// newline.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or if there are no words, simply display
// a newline.

// Examples:

// $> ./first_word "FOR PONY" | cat -e
// FOR$
// $> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
// this$
// $> ./first_word "   " | cat -e
// $
// $> ./first_word "a" "b" | cat -e
// $
// $> ./first_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
#include <unistd.h>
int main (int argc , char **argv)
{
	if(argc != 2)
	{
		write(1,"\n",1);
	}
	else
	{
		int x = 0;
		while((argv[1][x]>= '\t' && argv[1][x]<= '\v') || argv[1][x] == ' ')
			x++;
		while(argv[1][x])
		{
				if((argv[1][x]>= '\t' && argv[1][x]<= '\v') || argv[1][x] == ' ')
				{
					write(1,"\n",1);
					return (0);
				}
				else
					write(1,&argv[1][x],1);
				x++;
		}
		write(1,"\n",1);
	}
	return (0);
}