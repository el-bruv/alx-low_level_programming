#include "main.h"

/**
 * _abs - function determines absolute value of integer
 * @int: integer to determine
 *
 * Return: absolute value
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}
