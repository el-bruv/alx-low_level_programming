#include <unistd.h>
#include "main.h"

/**
 * main - to print out arguments as recieved
 * @argc: counter parameter of arguments
 * @argv: array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int i;
	int k;

	if (argc < 1)
		return (0);
	for (i = 0; i < argc; i++)
	{
		k = 0;
		while (argv[i][k])
		{
			write(1, &argv[i][k], 1);
			k++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
