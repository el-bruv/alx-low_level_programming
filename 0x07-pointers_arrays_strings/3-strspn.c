#include "main.h"

/**
 * _strspn - calculate length of prefix substring
 * @s: string parameter
 * @accept: bytes to match
 *
 * Description: from the first segment of a s, determine how many byte
 * match the characters in accept
 *
 * Return: number of bytes that match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;
	int count;

	count = 0;
	i = 0;
	while (s[i + 1] != ' ')
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				count++;
		}
		i++;
	}
	return (count);
}
