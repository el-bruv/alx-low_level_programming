#include "variadic_functions.h"

/**
 * sum_them_all - function to tally up argument parameters
 * @n: counter parameter
 *
 * Return: sum of parameters, 0 for no parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int tally;
	va_list pl;

	va_start (pl, n);
	tally = 0;
	i = 0;
	while (i < n)
	{
		tally = tally + va_arg(pl, int);
		i++;
	}
	va_end (pl);
	return (tally);
}
