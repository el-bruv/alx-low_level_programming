#include "main.h"

/**
 * print_alphabet - prints letters of alphabet
 *
 * Return: zero for success
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
