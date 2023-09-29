#include "main.h"

/**
 * _strlen_recursion - determine length of a string using recursion
 * @s: string parameter
 *
 * Return: integer of length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
