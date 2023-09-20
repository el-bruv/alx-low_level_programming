#include "main.h"

/**
 * print_last_digit - computes last digit of a number
 * @k: number to determine last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int k)
{
	int x;

	x = k % 10;
	if (x < 0)
		x = x * -1;
	_putchar(48 + x);
	return (x);
}
