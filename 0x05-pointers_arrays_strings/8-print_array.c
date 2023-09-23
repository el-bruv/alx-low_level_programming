#include "main.h"
#include <stdio.h>

/**
 * print_array - print n numbers of item inside of an array
 * @a: array parameter
 * @n: iteration parameter
 *
 * Return: void so nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if ((i + 1) !=  n)
			printf(", ");
		i++;
	}
	printf("\n");
}
