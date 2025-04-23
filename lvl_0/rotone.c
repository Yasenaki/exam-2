/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:57:15 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/21 16:06:13 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rotone
// Expected files   : rotone.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the next one in alphabetical order.

// 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

// The output will be followed by a \n.

// If the number of arguments is not 1, the program displays \n.

// Example:

// $>./rotone "abc"
// bcd
// $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
// Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
// Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
// $>./rotone "AkjhZ zLKIJz , 23y " | cat -e
// BlkiA aMLJKa , 23z $
// BlkiA aMLJKa , 23z $
// $>./rotone | cat -e
// $
// $>
// $>./rotone "" | cat -e
// $
// $>

#include <unistd.h>
int main(int argc , char **argv)
{
	int x = 0;
	int out = 0;
	if(argc != 2)
	{
		write(1,"\n",1);
	}
	else
	{
		while(argv[1][x])
		{
			if(argv[1][x] >= 'a' && argv[1][x] <= 'z')
			{
				if(argv[1][x] == 'z')
					out = 'a';
				else
					out = argv[1][x] +1;
				write(1,&out,1);
			}
			else if(argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				if(argv[1][x] == 'Z')
					out = 'A';
				else
					out = argv[1][x] +1;
				write(1,&out,1);
			}
			else 
				write(1,&argv[1][x],1);
			x++;
		}
		write(1,"\n",1);
	}
}