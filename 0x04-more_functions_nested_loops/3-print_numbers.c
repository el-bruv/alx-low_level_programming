#include "main.h"
/**
 * print_numbers - print out decimal digits
 *
 * Return: void, so nothing
 */

void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
