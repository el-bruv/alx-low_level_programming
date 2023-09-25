#include "main.h"

/**
 * more_numbers - print numbers 0 to 14, 10 times
 *
 * Return: void, so nothing but display of rows of numbers
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;
	int m;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j <= 9)
				_putchar(48 + j);
			else
			{
				m = j;
				while (m >= 0)
				{
					if (m > 9)
						k = m / 10;
					else
						k = m;
					_putchar(48 + k);
					m -= 10;
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
