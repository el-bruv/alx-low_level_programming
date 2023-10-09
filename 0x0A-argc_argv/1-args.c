#include <stdio.h>
#include "main.h"

/**
 * main - to print number of arguments passed
 * @argc: counter paramater of arguments
 * @argv: array of arguments passed in
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	if (!argv)
		return (0);
	printf("%d\n", argc - 1);
	return (0);
}
