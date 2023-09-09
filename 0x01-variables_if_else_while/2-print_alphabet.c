#include <stdio.h>

/**
 * main - print characters
 *
 * Description: program to print out lowercase alphabet
 *
 * Return: zero if success
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
