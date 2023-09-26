#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of two diagonal directions of square matrix
 * @a: array parameter
 * @size: matrix size parameter
 *
 * Return: sum of diagonal 1, sum of diagonal 2
 */
void print_diagsums(int *a, int size)
{
	int i;
	int k;
	int countup;
	int countdown;

	i = 0;
	k = (size * size) - 1;
	k = k - (size - 1);
	countup = 0;
	countdown = 0;
	while (i < (size * size))
	{
		countup = countup + a[k];
		countdown = countdown + a[i];
		i = i + (size + 1);
		k = k - (size - 1);
	}
	printf("%d, %d\n", countdown, countup);
}
