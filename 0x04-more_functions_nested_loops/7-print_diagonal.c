#include "main.h"

/**
 * print_diagonal - function to draw a diagonal line on the terminal, n times
 * @n: n times parameter
 *
 * Return: void so nothing
 */
void print_diagonal(int n)
{
	int i;
	int k;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			for (k = 0; k < i; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
