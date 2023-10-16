#include "function_pointers.h"

/**
 * print_name - print out a name
 * @name: name parameter to print out
 * @f: function to print name out parameter
 *
 * Return: void so nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
