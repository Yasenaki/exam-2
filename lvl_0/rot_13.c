/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:14:56 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/21 15:55:58 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rot_13
// Expected files   : rot_13.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.

// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

// The output will be followed by a newline.

// If the number of arguments is not 1, the program displays a newline.

// Example:

// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $
// NxwuM mYXVWm , 23l $
// $>./rot_13 | cat -e
// $
// $>
// $>./rot_13 "" | cat -e
// $
// $>
#include <unistd.h>
int main(int argc , char **argv)
{
	if(argc != 2)
	{
		write(1,"\n",1);
	}
	else
	{
		int out;
		int x = 0;
		while(argv[1][x])
		{
			if(argv[1][x] >= 'a' && argv[1][x] <= 'z')
			{
				out = ((argv[1][x] - 'a') + 13) + 'a';
				if(out > 'z')
				{
					out = 'a' + (out - 'z') -1;
				}
				write(1,&out,1);
			}
			else if(argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				out = ((argv[1][x] - 'A') + 13) + 'A'; 
				if(out > 'Z')
					out = (out - 'Z') + 'A' -1;
				write(1,&out,1);
			}
			else 
				write(1,&argv[1][x],1);
			x++;
		}
		write(1,"\n",1);
	}
}