#include "main.h"

/**
 * print_alphabet_x10 - prints complete alphabet, ten times
 *
 * Return: zero for success
 */
void print_alphabet_x10(void)
{
	char i;
	int k;

	k = 0;
	while (k < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		k++;
	}
}
