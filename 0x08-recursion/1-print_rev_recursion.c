#include "main.h"

/**
 * _print_rev_recursion - print out a string in reverse, recursively
 * @s: string parameter
 *
 * Return: void so nothing
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 0) == '\0')
	{
		s++;
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*(s + 0));
}
