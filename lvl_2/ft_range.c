// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max +1)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int main(void)
{
    int min = -5;
    int max = 10;
    int *range = ft_range(min, max);
    int size = max - min;

    if (range == NULL)
    {
        printf("ft_range returned NULL\n");
        return 1;
    }

    printf("Range from %d to %d:\n", min, max);
    for (int i = 0; i < size+1; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    // Free allocated memory
    free(range);
    return 0;
}
