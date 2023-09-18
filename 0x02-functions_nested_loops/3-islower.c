#include "main.h"

/**
 * _islower - function checks for lowercase character
 * @c: character to be checked
 *
 * Return: one for success, zero for fail
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
