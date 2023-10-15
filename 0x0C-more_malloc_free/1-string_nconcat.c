#include "main.h"

/**
 * string_nconcat - append n bytes of s2 to s1, in new memory location
 * @s1: first string parameter
 * @s2: second string parameter
 * @n: number of bytes from s2 parameter
 *
 * Return: pointer to concatenated string, NULL for failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int k;
	unsigned int s1l;

	s1l = 0;
	if (s1 == NULL)
		s1l = s1l;
	else
	{
		while (s1[s1l])
			s1l++;
	}
	k = s1l + n + 1;
	s = malloc(sizeof(char) * k);
	if (s == NULL || s == 0)
		return (NULL);
	i = 0;
	if (s1 == NULL)
		i = i;
	else
	{
		while (s1[i] != '\0' && i < k)
		{
			s[i] = s1[i];
			i++;
		}
	}
	if (s2 == NULL)
		i = i;
	else
	{
		while (s2[i - s1l] != '\0' && (i - s1l) < n && i < k)
		{
			s[i] = s2[i - s1l];
			i++;
		}
	}
	s[i] = '\0';
	return (s);
}
