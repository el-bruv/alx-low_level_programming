#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one parameter
 * @s2: string two parameter
 *
 * Return: positive for s1 > s2, negative for s1 < s2, zero for same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
