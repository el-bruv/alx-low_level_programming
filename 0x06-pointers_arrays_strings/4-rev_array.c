#include "main.h"

/**
 * swap_int - swap the positions of two integer inputs
 * @a: integer one parameter
 * @b: integer two parameter
 *
 * Return: void so nothing
 */
void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}


/**
 * reverse_array - reverse the order of the integers in an array
 * @a: array parameter
 * @n: number of items in the array parameter
 *
 * Return: void so nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	n--;
	i = 0;
	while (i < (n / 2))
	{
		swap_int(&a[i], &a[n - i]);
		i++;
	}
}
