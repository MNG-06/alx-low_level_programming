#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars, and assign it with a specific char
 * @size: size of an array
 * @c: char to be assigned
 *
 * Return: Returns a pointer to the array, or NULL if it fails,
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		str[n] = c;
	return (str);
}
