#include "main.h"

/**
 * factorial - calculate the factorial of an number, using pointers
 * @n: number parameter
 *
 * Return: result of calculation, one for input of 0, -1 for input less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	n = n * factorial(n - 1);
	return (n);
}
