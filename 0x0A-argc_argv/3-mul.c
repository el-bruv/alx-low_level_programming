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
	if (s[0] == '-')
		i++;
	k = 0;
	while (s[i])
	{
		k += (s[i] - 48);
		if (s[i + 1] != '\0')
			k *= 10;
		i++;
	}
	if (s[0] == '-')
		k *= -1;
	return (k);
}


/**
 * main - to print multiplication of two numbers
 * @argc: counter parameter of arguments
 * @argv: array of arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char **argv)
{
	int u;
	int j;
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	u = _atoi(argv[1]);
	j = _atoi(argv[2]);
	m = u * j;
	printf("%d\n", m);
	return (0);
}
