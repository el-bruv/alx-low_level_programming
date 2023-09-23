#include "main.h"

/**
 * swap_char - function to swap characters
 * @a: first character parameter
 * @b: second character parameter
 *
 * Return: void so nothing
 */
void swap_char(char *a, char *b)
{
	char h;

	h = *a;
	*a = *b;
	*b = h;
}

/**
 * rev_string - reverse a string order
 * @s: string parameter
 *
 * Return: void so nothing
 */
void rev_string(char *s)
{
	int i;
	int k;

	i = 0;
	while (s[i])
		i++;
	i--;
	k = 0;
	while (i >= 0 && k <= i)
	{
		swap_char(&s[k], &s[i]);
		k++;
		i--;
	}
}
