#include "main.h"

/**
 * main - print out string
 *
 * Return: zero for success
 */
int main(void)
{
	int i;
	char *str;

	i = 0;
	str = "_putchar";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
