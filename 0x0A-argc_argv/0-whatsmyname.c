#include <stdio.h>
#include "main.h"

/**
 * whatsmyname - program to print out program name
 * 
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[0][i])
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');
	return (0);
}
