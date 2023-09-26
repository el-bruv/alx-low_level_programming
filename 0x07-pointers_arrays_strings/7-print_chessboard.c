#include "main.h"

/**
 * print_chessboard - print the layout of a chessboard from 2D array
 * @a: pointer to pointer parameter
 *
 * Return: void so nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[i][k]);
		_putchar('\n');
	}
}
