#include "main.h"

/**
 * print_rev - print out a string but in reverse
 * @s: string parameter
 *
 * Return: void so nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
