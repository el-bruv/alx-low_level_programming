#include "main.h"

/**
 * create_array - declare and initialize memory array, using special character
 * @size: number of units in buffer parameter
 * @c: special character parameter
 *
 * Return: pointer to array, NULL for size=0 or failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (0);
	s = malloc(sizeof(char) * size);
	if (!s)
		return (0);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
