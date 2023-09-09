#include <stdio.h>

/**
 * main - print digits
 *
 * Description: print possible combinations of single-digit numbers
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
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
