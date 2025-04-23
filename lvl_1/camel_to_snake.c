/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:50:05 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/22 09:59:39 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// Assignment name  : camel_to_snake
// Expected files   : camel_to_snake.c
// Allowed functions: malloc, realloc, write
// --------------------------------------------------------------------------------

// Write a program that takes a single string in lowerCamelCase format
// and converts it into a string in snake_case format.

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".

// Examples:
// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
// $

#include <unistd.h>

int main(int argc, char **argv)
{
	int x = 0;
	int holder = 0;
	if(argc != 2)
	{
		write(1,"\n",1);
	}
	else
	{
		while(argv[1][x])
		{
			if(argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				write(1,"_",1);
				holder = argv[1][x] + 32;
				write(1,&holder,1);
			}
			else
				write(1,&argv[1][x],1);
			x++;
		}
		write(1,"\n",1);
	}
}