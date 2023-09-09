#include <stdio.h>

/**
 * main - print hexidecimal digits
 *
 * Description: print hexidecimal digits in lowercase
 *
 * Return: zero if success
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}
	while (n < 16)
	{
		putchar(87 + n);
		n++;
	}
	putchar('\n');
	return (0);
}
