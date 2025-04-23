/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:24:39 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 19:02:36 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $>
#include <unistd.h>
char ft_putnb(int nb)
{
	int out;
	if(nb == -2147483648)
	{
		write(1,"-",1);
		write(1,"2",1);
		write(1,"147483648",9);
	}
	if(nb < 10)
	{
		out = nb + '0';
		write(1,&out,1);
	}
	if(nb > 9)
	{
		ft_putnb(nb/10);
		ft_putnb(nb%10);
	}
	return (nb);
}
int main()
{
	int x = 1;
	while( x != 101)
	{
		if(x % 3 == 0 && x % 5 == 0)
			write(1,"fizzbuzz\n",9);
		else if(x % 3 == 0)
			write(1,"fizz\n",5);
		else if(x % 5 == 0)
			write(1,"buzz\n",5);
		else if(x % 3 != 0 && x % 5 != 0)
		{
			ft_putnb(x);
			write(1,"\n",1);
		}	
		x++;
	}
}