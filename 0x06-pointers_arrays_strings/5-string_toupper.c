#include "main.h"

/**
 * string_toupper - change letters from lowercase to uppercase
 * @str: string parameter
 *
 * Return: pointer of changed string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
