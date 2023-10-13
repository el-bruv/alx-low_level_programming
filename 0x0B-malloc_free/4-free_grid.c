#include "main.h"

/**
 * free_grid - free up space allocated
 * @grid: 2d array parameter
 * @height: height parameter of array
 *
 * Return: void so nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	int k;

	if (grid == 0 || height == 0)
		return;
	i = 0;
	while (grid[i])
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
