/**
 * _isupper - checks case of character
 * @c: character to be checked
 *
 * Return: 1 if uppercase, 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
