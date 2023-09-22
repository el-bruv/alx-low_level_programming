#include "main.h"

/**
 * _puts - print out a string to stdout followed by a new line
 * @str: string parameter
 *
 * Return: void so nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
