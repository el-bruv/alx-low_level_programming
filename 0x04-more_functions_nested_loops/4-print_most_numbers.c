#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print out decimal digits except specified
 *
 * Return: void, so nothing
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i != 2)
			if (i != 4)
				_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
