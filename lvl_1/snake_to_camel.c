/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:43:58 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 15:03:21 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : snake_to_camel
// Expected files   : snake_to_camel.c
// Allowed functions: malloc, free, realloc, write
// --------------------------------------------------------------------------------

// Write a program that takes a single string in snake_case format
// and converts it into a string in lowerCamelCase format.

// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// Examples:
// $>./snake_to_camel "here_is_a_snake_case_word"
// hereIsASnakeCaseWord
// $>./snake_to_camel "hello_world" | cat -e
// helloWorld$
// $>./snake_to_camel | cat -e
// $
#include <unistd.h>
#include <stdlib.h>
int main(int argc , char **argv)
{
	int x = 0;
	char holder;
	if (argc != 2)
		write(1,"\n",1);
	else
	{
		while(argv[1][x])
		{
			if(argv[1][x] == '_')
			{
				x++;
				holder = argv[1][x] - 32;
				write(1,&holder,1);
			}
			else
			{
				write(1,&argv[1][x],1);
			}
			x++;
		}
	}
	write(1,"\n",1);
}