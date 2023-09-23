#include "main.h"

/**
 * puts_half - print out the second half of a string
 * @str: string parameter
 *
 * Return: void so nothing
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (i % 2 == 0)
		i = i / 2;
	else
		i = ((i - 1) / 2) + 1;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
