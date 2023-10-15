#include <stdio.h>
#ifndef _2_MAIN_C
#define _2_MAIN_C

/**
 * main - to print out name of file calling this macro
 *
 * Return: 0 for success
 */
int main(void)
{
	char *fn;

	fn = __FILE__;
	printf("%s\n", fn);
	return (0);
}

#endif /* _2_MAIN_C */

