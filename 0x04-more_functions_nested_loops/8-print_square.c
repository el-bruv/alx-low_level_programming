#include "main.h"

/**
 * print_square - function to print a square
 * @size: size of square parameter
 *
 * Return: void so nothing
 */
void print_square(int size)
{
	int i;
	int k;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < size)
		{
			k = 0;
			while (k < size)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
