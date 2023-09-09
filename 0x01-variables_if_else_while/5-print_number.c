#include <stdio.h>

/**
 * main - print base 10 digits
 *
 * Description: print all single digits of base 10
 *
 * Return: zero if success
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
