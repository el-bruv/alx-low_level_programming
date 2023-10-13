#include "main.h"

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
	garray = malloc(sizeof(int *) * height);
	if (garray == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		garray[i] = malloc(sizeof(int **) * width);
		if (garray[i] == NULL)
			return (0);
		for (k = 0; k < width; k++)
		{
			garray[i][k] = 0;
			if (garray[i][k] != 0)
				return (0);
		}
	}
	return (garray);
}
