#include <stdio.h>

/**
 * main - print base 10 digits
 *
 * Description: print base 10 numbers without using printf
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
	putchar('\n');
	return (0);
}
