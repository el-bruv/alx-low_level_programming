#include <stdio.h>
#include "main.h"

/**
 * main - program to print out program/executable name
 * @argc: counter parameter for arguments given in
 * @argv: array of arguments passed in
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int i;

	if (argc < 1)
		return (0);
	i = 0;
	while (argv[0][i])
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');
	return (0);
}
