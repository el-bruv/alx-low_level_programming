#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print out decimal digits
 *
 * Return: void, so nothing
 */

void print_numbers(void)
{
	int i;

	i = 0;
	for (i <= 9)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
