#include "main.h"

/**
 * print_line - function to print a line of underscores
 *
 * Return: void, so no value except to print line
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
