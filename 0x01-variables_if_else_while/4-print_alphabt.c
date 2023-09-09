#include <stdio.h>

/**
 * main - selective character printing
 *
 * Description: print alphabet in lowercase except q and e
 *
 * Return: zero if success
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a++;
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
