#include "main.h"


/**
 * _strlen - calculate string length
 * @st: string parameter
 *
 * Return: length of string
 */
int _strlen(char *st)
{
	int i;

	if (st == 0)
	{
		i = 0;
	}
	else
	{
		i = 0;
		while (st[i])
			i++;
	}
	return (i);
}

/**
 * str_concat - concatenate s2 to s1
 * @s1: first string parameter
 * @s2: second string parameter
 *
 * Return: pointer of concatenated string, 0 for empty string or failure
 */
char *str_concat(char *s1, char *s2)
{
	int i1;
	int i2;
	int k;
	char *s;

	i1 = _strlen(s1);
	i2 = _strlen(s2);
	k = i1 + i2;
	if (k == 0)
	{
		s = malloc(0);
		return (s);
	}
	s = malloc(sizeof(char) * (k + 1));
	if (!s)
		return (0);
	if (s1 == 0)
		i1 = 0;
	else
	{
		k = 0;
		while (s1[k] != '\0' && k < i1)
		{
			s[k] = s1[k];
			k++;
		}
	}
	if (s2 == 0)
		i2 = 0;
	else
	{
		k = 0;
		while (s2[k] && k < i2)
		{
			s[i1 + k] = s2[k];
			k++;
		}
	}
	s[i1 + i2 + 1] = '\0';
	return (s);
}
