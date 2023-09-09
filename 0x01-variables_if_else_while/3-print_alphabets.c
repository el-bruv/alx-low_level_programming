#include <stdio.h>

/**
 * main - print character by character
 *
 * Description: print alphabet in lowercase then uppercase
 *
 * Return: zero for successful run
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
	a = 'A';
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
