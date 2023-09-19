#include "main.h"

/**
 * jack_bauer - prints the individual minutes of the day on a new line
 *
 * Return: void so nothing returned
 */
void jack_bauer(void)
{
	int i;
	int k;

	i = 0;
	while (i <= 23)
	{
		k = 0;
		while (k <= 59)
		{
			_putchar(48 + (i / 10));
			_putchar(48 + (i % 10));
			_putchar(':');
			_putchar(48 + (k / 10));
			_putchar(48 + (k % 10));
			_putchar('\n');
			k++;
		}
		i++;
	}
}
