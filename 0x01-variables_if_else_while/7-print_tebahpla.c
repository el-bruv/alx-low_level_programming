#include <stdio.h>

/**
 * main - print characters
 *
 * Description: program to print out lowercase alphabet in reverse
 *
 * Return: zero if success
 */

int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
