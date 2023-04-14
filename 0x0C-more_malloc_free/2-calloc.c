#include "main.h"
#include <stdlib.h>

/**
 * _memset - A function that allocates memory for an array
 * @s: The memory area
 * @b: char to be copied
 * @n: The number of b copies
 *
 * Return: A pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements of an array
 * @size: Size of each element
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
