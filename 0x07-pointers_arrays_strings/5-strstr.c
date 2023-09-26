#include "main.h"

/**
 * _strstr - locate a substring in a string
 * @haystack: string parameter
 * @needle: substring parameter
 *
 * Return: pointer to beginning of matched substring, NULL for no match
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int k;
	int l;

	k = 0;
	while (needle[k])
		k++;
	if (k == 0)
		return (haystack);
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			for (l = 0; haystack[i + l] == needle[l];)
			{
				if (haystack[i + l] != needle[l])
					break;
				if (l == (k - 1))
					return (&haystack[i]);
				l++;
			}
		}
		i++;
	}
	return (0);
}
