#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: Is an unsigned int
 *
 * Return: Memory allocated pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;
	char 'b';
	a = malloc(b);

	if (a == NULL)
		exit('b');

	return (a);
}
