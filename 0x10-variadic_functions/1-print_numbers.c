#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function to print out  argument parameters
 * @separator: string to print between numbers
 * @n: counter parameter
 *
 * Return: void so nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pl;

	if (separator == NULL)
		return;
	va_start(pl, n);
	i = 0;
	printf("%d", va_arg(pl, int));
	i++;
	while (i < n)
	{
		printf("%s%d", separator, va_arg(pl, int));
		i++;
	}
	printf("\n");
	va_end(pl);
}
