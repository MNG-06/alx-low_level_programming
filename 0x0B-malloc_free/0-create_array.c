#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars.
 * @size: the size of the array
 * @c: A character to initilize the array
 * Return: A pointer to the space allocated
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *heap_array;

	if (size == 0)
		return (NULL);
	heap_array = malloc(size);
	if (heap_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		heap_array[i] = c;
	}
	return (heap_array);
}
