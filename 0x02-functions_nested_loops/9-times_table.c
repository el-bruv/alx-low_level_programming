#include "main.h"

/**
 * times_table - prints 9 times table in a square
 *
 * return: void so nothing
 */
void times_table(void)
{
	int i;
	int k;
	int m;

	i = 0;
	while (i <= 9)
	{
		k = 1;
		_putchar('0');
		while (k <= 9)
		{
			m = i * k;
			_putchar(',');
			if (m < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + m);
			}
			else
			{
				_putchar(' ');
				_putchar(48 + (m / 10));
				_putchar(48 + (m % 10));
			}
			k++;
		}
		_putchar('\n');
		i++;
	}
}
