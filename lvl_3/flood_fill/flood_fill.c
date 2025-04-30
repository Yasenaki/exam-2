/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 07:46:52 by jopires-          #+#    #+#             */
/*   Updated: 2025/04/24 08:11:15 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : flood_fill
// Expected files   : *.c, *.h
// Allowed functions: -
// --------------------------------------------------------------------------------

// Write a function that takes a char ** as a 2-dimensional array of char, a
// t_point as the dimensions of this array and a t_point as the starting point.

// Starting from the given 'begin' t_point, this function fills an entire zone
// by replacing characters inside with the character 'F'. A zone is an group of
// the same character delimitated horizontally and vertically by other characters
// or the array boundry.

// The flood_fill function won't fill diagonally.

// The flood_fill function will be prototyped like this:
//   void  flood_fill(char **tab, t_point size, t_point begin);

// The t_point structure is prototyped like this:

//   typedef struct  s_point
//   {
//     int           x;
//     int           y;
//   }               t_point;

// Example:
// $> gcc flood_fill.c test.c -o test; ./test
// 11111111
// 10001001
// 10010001
// 10110001
// 11100001

// FFFFFFFF
// F000F00F
// F00F000F
// F0FF000F
// FFF0000F
// $>
#include "flood_fill.h"

void fill(char **tab, t_point size, char target, int row, int col)
{
    // Check if current row and column values are out of bounds
    if (row < 0 || col < 0 || row >= size.y || col >= size.x)
        return;
    
    // Check if current cell has already been filled or does not match the target character
    if (tab[row][col] == 'F' || tab[row][col] != target)
        return;

    // Mark current cell as filled
    tab[row][col] = 'F';

    // Recursively fill neighboring cells
    fill(tab, size, target, row -1, col); // fill cell above
    fill(tab, size, target, row +1, col); // fill cell below
    fill(tab, size, target, row, col - 1); // fill cell to the left
    fill(tab, size, target, row, col + 1); // fill cell to the right
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x]; // Get the character to fill around
    fill(tab, size, target, begin.y, begin.x); // Start the flood fill from the specified point
}


// main from subject
char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}