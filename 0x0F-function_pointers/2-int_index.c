#include "function_pointers.h"

/**
 * int_index - search for an integer, using a function pointer and return its \
 * index
 * @array: array of integers parameter
 * @size: length of array parameter
 * @cmp: pointer to function parameter
 *
 * Return: index of identified integer, -1 for no match or incorrect size
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
