/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:44:34 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 14:43:33 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0010  0110
// 	 ||
// 	 \/
//  0110  0100

// 0000 0010
// 1000 0000

// var = (var << ctd) & 1 << (7 - ctd) 

#include <stdio.h>
#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int oct = 7;
	int out;
	while (oct >= 0)
	{
		out = ((octet >> oct) & 1) + '0';
		write(1,&out,1);
		oct--;
	}
}
// c 000 000001 00
// o 00 0000 01 00
unsigned char	reverse_bits(unsigned char octet)
{
	int oct = 0;
	unsigned char c;
	while (oct < 8)
	{
		c = c << 1;
		c = c | (octet >> oct & 1);
		oct ++;
	}
	return (c);
}


int main ()
{
	unsigned char octet = reverse_bits(127);
	int oct = 7;
	int out;
	while (oct >= 0)
	{
		out = ((octet >> oct) & 1) + '0';
		write(1,&out,1);
		oct--;
	}
}