// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.
#include <stdlib.h>
#include <stdio.h>
int		*ft_rrange(int start, int end)
{
	int		*rrange;
	int		i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		rrange[i++] = end;
		end -= (start > end) ? -1 : 1;
	}
	rrange[i] = end;
	return (rrange);
}
int main(void)
{
    int start = 3;
    int end = 7;
    int *rrange;
    int size;
    int i;

    // Determine size of the array
    size = (start > end) ? (start - end + 1) : (end - start + 1);

    // Call the function
    rrange = ft_rrange(start, end);

    if (rrange == NULL)
    {
        printf("ft_rrange returned NULL\n");
        return 1;
    }

    printf("Reverse range from %d to %d:\n", start, end);
    for (i = 0; i < size; i++)
    {
        printf("%d ", rrange[i]);
    }
    printf("\n");

    // Free memory
    free(rrange);
    return 0;
}