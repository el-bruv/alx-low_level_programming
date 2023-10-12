#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - declare and initialize a 2d array to 0's
 * @width: width of array parameter
 * @height: height of array parameter
 *
 * Return: initialized array, 0 on failure/parameter being 0/param < 0;
 */
int **alloc_grid(int width, int height)
{
	int i;
	int k;
	int **garray;

	if (width <= 0 || height <= 0)
		return (0);
	garray = (int **)malloc(sizeof(int *) * (width + 1));
	if (!garray)
		return (0);
	k = 0;
	while (k < width)
	{
		garray[k] = (int *)malloc(sizeof(int) * (height + 1));
		if (!garray[k])
			return (0);
		k++;
	}
	i = 0;
	while (i < width)
	{
		k = 0;
		while (k < height)
		{
			garray[i][k] = 0;
			k++;
		}
		garray[i][k] = '\0';
		i++;
	}
	garray[i] = '\0';
	return (garray);
}
