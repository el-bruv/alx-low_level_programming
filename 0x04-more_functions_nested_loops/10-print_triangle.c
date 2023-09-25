#include "main.h"

/**
 * print_triangle - print a triangle using input size integer
 * @size: triangle size parameter
 *
 * Return: void so nothing
 */
void print_triangle(int size)
{
	int i;
	int k;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			for (k = 0; k < (size - (i + 1)); k++)
				_putchar(' ');
			while (k < size)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
