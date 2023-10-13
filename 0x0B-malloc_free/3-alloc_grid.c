#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - declare and initialize a 2d array to 0's
 * @width: width of array parameter
 * @height: height of array parameter
 *
 * Return: initialized array, 0 on failure/parameter <= 0;
 */
int **alloc_grid(int width, int height)
{
	int i;
	int k;
	int **garray;

	if (width <= 0 || height <= 0)
		return (0);
	garray = (int **)malloc(sizeof(int *) * (width));
	if (garray == 0 || sizeof(garray) != sizeof(int **))
		return (0);
	i = 0;
	while (i < width)
	{
		garray[i] = (int *)malloc(sizeof(int) * (height));
		if (garray[i] == 0 || sizeof(garray[i]) != sizeof(int *))
			return (0);
		k = 0;
		while (k < height)
		{
			garray[i][k] = 0;
			if (garray[i][k] != 0 || sizeof(garray[i][k]) != sizeof(int))
				return (0);
			k++;
		}
		i++;
	}
	return (garray);
}
