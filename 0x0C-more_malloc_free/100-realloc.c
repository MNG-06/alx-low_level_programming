#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *pt;
	char *heap_array;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*Casting a void* to a char* */
	pt = (char *)ptr;
	heap_array = malloc(sizeof(char) * new_size);
	if (heap_array == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			heap_array[i] = pt[i];
	}
	free(ptr);
	return (heap_array);
}
