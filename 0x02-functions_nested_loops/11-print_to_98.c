#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print integers from input parameter to the number 98
 * @n: input parameter to start from
 *
 * Return: void so nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%i", n);
		n++;
		while (n <= 98)
		{
			printf(", %i", n);
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		printf("%i", n);
		n--;
		while (n >= 98)
		{
			printf(", %i", n);
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%i\n", n);
	}
}
