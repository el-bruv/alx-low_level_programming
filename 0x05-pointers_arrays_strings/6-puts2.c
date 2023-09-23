#include "main.h"

/**
 * puts2 - print out odd-ordered characters
 * @str: string parameter
 *
 * Return: void so nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
