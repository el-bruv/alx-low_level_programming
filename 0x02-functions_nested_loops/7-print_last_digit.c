#include "main.h"
#include <limits.h>

/**
 * print_last_digit - computes last digit of a number
 * @k: number to determine last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int k)
{
	int x;

	if (k == INT_MIN)
		x = (x % 10) * -1;
	else if (x < 0)
		x = _abs(x) % 10;
	else
		x = x % 10;
	_putchar(48 + x);
	return (x);
}
