#include "main.h"

/**
 * print_last_digit - computes last digit of a number
 * @x: number to determine last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int x)
{
	if (x < 0)
		x *= -1;
	_putchar(48 + (x % 10));
	return (x % 10);
}
