#include "main.h"

/**
 * array_range - create array of range of numbers, from min to max, both
 * included
 * @min: lower number parameter
 * @max: higher number parameter
 *
 * Return: pointer to array of range, NULL for failure
 */
int *array_range(int min, int max)
{
	int *rarray;
	int i;
	int k;

	if (min > max)
		return (NULL);
	k = (max - min) + 1;
	rarray = malloc(sizeof(int) * k);
	if (rarray == NULL)
		return (NULL);
	i = 0;
	k = min;
	while (k <= max)
	{
		rarray[i] = k;
		i++;
		k++;
	}
	return (rarray);
}
