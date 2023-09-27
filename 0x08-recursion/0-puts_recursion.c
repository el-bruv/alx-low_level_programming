#include "main.h"

/**
 * _puts_recursion - function to print a string
 * @s: string parameter
 *
 * Return: void so nothing
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
