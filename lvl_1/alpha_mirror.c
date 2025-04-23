/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:10:28 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/22 09:34:50 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : alpha_mirror
// Expected files   : alpha_mirror.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called alpha_mirror that takes a string and displays this string
// after replacing each alphabetical character by the opposite alphabetical
// character, followed by a newline.

// 'a' becomes 'z', 'Z' becomes 'A'
// 'd' becomes 'w', 'M' becomes 'N'

// and so on.

// Case is not changed.

// If the number of arguments is not 1, display only a newline.

// Examples:

// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $
// $>

#include <unistd.h>
int main (int argc, char **argv)
{
	int x = 0;
	int holder;
	if (argc != 2)
	{
		write(1,"\n",1);
	}
	else
	{
		while(argv[1][x])
		{
			if(argv[1][x] >= 'a' && argv[1][x] <= 'z')
				holder = 'z'- (argv[1][x] - 'a');
			else if(argv[1][x] >= 'A' && argv[1][x] <= 'Z')
				holder = 'Z'- (argv[1][x] - 'A');
			else 
				holder = argv[1][x];
			write(1,&holder,1);
			x++;
		}
		write(1,"\n",1);
	}
}