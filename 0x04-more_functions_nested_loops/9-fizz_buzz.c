#include <stdio.h>

/**
 * main - program to print integers and different values at certain multiples
 *
 * Return: zero for success
 */
int main(void)
{
	int i;

	printf("1");
	i = 2;
	while (i <= 100)
	{
		printf(" ");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
