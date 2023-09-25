#include "main.h"

/**
 * _memset - fill memory, n times, with a constant byte
 * @s: memory area parameter
 * @b: constant byte
 * @n: n times parameter
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
