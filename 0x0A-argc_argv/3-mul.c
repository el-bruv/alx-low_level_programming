#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string parameter
 *
 * Return: integer value of string
 */
long int _atoi(char *s)
{
	long int i;
	long int k;

	i = 0;
	k = 0;
	while (s[i])
	{
		k += (s[i] - 48);
		k *= 10;
		i++;
	}
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
	long int u;
	long int j;
	long int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	u = _atoi(argv[1]);
	j = _atoi(argv[2]);
	m = u * j;
	printf("%ld\n", m);
	return (m);
}
