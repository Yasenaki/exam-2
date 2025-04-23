/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:49:11 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/23 12:48:55 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"

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
#include <stdio.h>
int main()
{
	print_bits(0);
	printf(" expected :00000000\n");
    print_bits(1);
	printf(" expected :00000001\n");
    print_bits(2);     
	printf(" expected :00000010\n");
    print_bits(5);      
	printf(" expected :00000101\n");
    print_bits(42);     
	printf(" expected :00101010\n");
    print_bits(255);    
	printf(" expected :11111111\n");
    print_bits(128);    
	printf(" expected :10000000\n");
}
