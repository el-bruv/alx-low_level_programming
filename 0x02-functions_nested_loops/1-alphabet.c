#include "main.h"

/**
 * print_alphabet - to display lowercase alphabet
 *
 * Return: zero for success
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
