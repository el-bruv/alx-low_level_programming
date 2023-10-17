#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function to print out argument parameters
 * @separator: string to print between parameters
 * @n: counter parameter
 *
 * Return: void so nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pl;
	char *s;

	if (separator == NULL)
		return;
	va_start(pl, n);
	i = 0;
	printf("%s", va_arg(pl, char *));
	i++;
	while (i < n)
	{
		s = va_arg(pl, char *);
		if (s == NULL)
			printf("%s(nil)", separator);
		else
			printf("%s%s", separator, s);
		i++;
	}
	printf("\n");
	va_end(pl);
}
