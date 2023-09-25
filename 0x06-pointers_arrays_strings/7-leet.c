#include "main.h"

/**
 * leet - encode a string, into 1337
 * @str: string parameter
 *
 * Return: pointer to altered string
 */
char *leet(char *str)
{
	int i;
	int k;
	char a[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int n[] = {4, 3, 0, 7, 1};

	i = 0;
	while (str[i] != '\0')
	{
		for (k = 0; k < 10; k++)
		{
			if (str[i] == a[k])
				str[i] = 48 + n[k / 2];
		}

		i++;
	}
	return (str);
}
