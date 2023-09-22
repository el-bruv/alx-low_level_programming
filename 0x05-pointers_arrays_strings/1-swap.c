#include "main.h"

/**
 * swap_int - function to swap the values of two integers
 * @a: first integer
 * @b: second integer
 *i
 * Returin: void so nothing
 */
void swap_int(int *a, int *b)
{
	int h;

	h = *b;
	*b = *a;
	*a = h;
}
