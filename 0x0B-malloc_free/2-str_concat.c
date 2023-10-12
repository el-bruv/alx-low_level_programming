#include "main.h"

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

	if (!s1 || !s2)
		return (0);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i1 = 0;
	while (s1[i1] != '\0')
		i1++;
	i2 = 0;
	while (s2[i2] != '\0')
		i2++;
	i2++;
	k = i1 + i2;
	if (k <= 0)
		return (0);
	s = malloc(sizeof(char) * k);
	if (!s)
		return (0);
	k = 0;
	while (s1[k] != '\0' && k < i1)
	{
		s[k] = s1[k];
		k++;
	}
	k = 0;
	while (s2[k] != '\0' && k < i2)
	{
		s[i1 + k] = s2[k];
		k++;
	}
	s[i1 + k] = '\0';
	return (s);
}
