#include <stdio.h>
#include "main.h"


/**
 * _atoi - convert string to integer
 * @s: string parameter
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (-1);
		k += (s[i] - 48);
		if (s[i + 1] != '\0')
			k *= 10;
		i++;
	}
	return (k);
}


/**
 * main - to add positive numbers
 * @argc: counter parameter of arguments
 * @argv: array of arguments for program
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char **argv)
{
	int i;
	int k;
	int l;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	i = 1;
	k = 0;
	while (i < argc)
	{
		l = 0;
		l = _atoi(argv[i]);
		if (l < 0)
		{
			puts("Error");
			return (1);
		}
		k += l;
		i++;
	}
	printf("%d\n", k);
	return (0);
}
