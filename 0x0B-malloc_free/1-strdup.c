#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a new memory space
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int n, m = 0;

	if (str == NULL)
		return (NULL);

	n = 0;
	while (str[n] != '\0')
		n++;

	s = malloc(sizeof(char) * (n + 1));

	if (s == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		s[m] = str[m];
	return (s);
}
