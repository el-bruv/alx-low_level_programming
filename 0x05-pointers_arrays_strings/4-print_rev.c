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

	i = _strlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
