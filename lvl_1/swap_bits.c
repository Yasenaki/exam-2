/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:03:53 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 15:10:55 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100
#include <unistd.h>
unsigned char	swap_bits(unsigned char octet)
{
	return(octet >> 4 | octet << 4);
}
int main()
{
	unsigned char octet = swap_bits(1);
	int oct = 7;
	int out;
	while(oct >= 0)
	{
		out = (octet >> oct & 1) + '0';
		write(1,&out,1);
		oct --; 
	}
}