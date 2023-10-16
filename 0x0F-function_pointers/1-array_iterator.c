#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 * @array: array of elements parameter
 * @size: size of array parameter
 * @action: pointer to function parameter
 *
 * Return: void so nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == 0 || size == 0 || action == 0)
		return;
	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
