#include "main.h"

/**
 * cap_string - function to capitalize all words of a string
 * @str: string parameter
 *
 * Return: pointer to altered string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '"')
				str[i] -= 32;
			if (str[i - 1] == '\n' || str[i - 1] == ',')
				str[i] -= 32;
			if (str[i - 1] == ';' || str[i - 1] == '.')
				str[i] -= 32;
			if (str[i - 1] == '!' || str[i - 1] == '?')
				str[i] -= 32;
			if (str[i - 1] == '\t')
				str[i] -= 32;
			if (str[i - 1] == '(' || str[i - 1] == ')')
				str[i] -= 32;
			if (str[i - 1] == '{' || str[i - 1] == '}')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
