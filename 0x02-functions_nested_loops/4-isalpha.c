#include "main.h"

/**
 * _isalpha - check if character is a letter, lower- or uppercase
 * @c: character to check
 *
 * Return: one for success, zero for fail
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
