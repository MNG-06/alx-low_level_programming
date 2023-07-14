#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _calloc - A function that allocates memory for an array.
  * @nmemb: number of memory bytes
  * @size: number of data type bits
  * Return: return pointer to initialized buffer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
