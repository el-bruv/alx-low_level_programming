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
	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
