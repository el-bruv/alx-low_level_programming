#include "main.h"
/**
 * print_numbers - print out decimal digits
 *
 * Return: void, so nothing
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
