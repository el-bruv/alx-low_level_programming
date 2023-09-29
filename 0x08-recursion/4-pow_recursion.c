#include "main.h"

/**
 * _pow_recursion - recursively, determine value x raised to the power of y
 * @x: base parameter
 * @y: exponent/power parameter
 *
 * Return: calculated value, -1 for y less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
