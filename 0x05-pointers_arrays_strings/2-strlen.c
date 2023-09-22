#include "main.h"
#include <stdio.h>

/**
 * _strlen - determine length of a string
 * @s: string paramter
 *
 * Return: integer of length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
