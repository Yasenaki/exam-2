/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:57:31 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 19:01:22 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <unistd.h>
int	ft_atoi(const char *str)
{
	int x = 0;
	int nb = 0;
	while(str[x]>= '0' && str[x]<= '9')
	{
		nb = nb *10 + (str[x] - '0');
		x++;
	}
	return (nb);
}
char ft_putnb(nb)
{
	int out;
	if(nb == -2147483648)
	{
		write(1,"-",1);
		write(1,"2",1);
		write(1,"147483648",1);
	}
	if(nb <= 9)
	{
		out = nb + '0';
		write(1,&out,1);
	}
	if(nb >= 10)
	{
		ft_putnb(nb /10);
		ft_putnb(nb %10);
	}
	return	(nb);
}
int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (x <= 1)
		return (0);
	while (x <= nb)
	{
		if (nb % x == 0)
		{
			if (x == nb)
				return (1);
			else
				return (0);
		}
		x++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	int conta = 0;
	int nb = 0;
	int x = 1;
	if(argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while(x != nb)
		{
			if(ft_is_prime(x) == 1)
				conta += x;
			x++;
		}
		conta += x;
		ft_putnb(conta);
	}
	write(1,"\n",1);
}