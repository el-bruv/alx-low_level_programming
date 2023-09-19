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

	x = 0;
	if (k == INT_MIN)
		x = (k % 10) * -1;
	else if (k < 0)
		x = _abs(k) % 10;
	else
		x = k % 10;
	_putchar(48 + x);
	return (x);
}
