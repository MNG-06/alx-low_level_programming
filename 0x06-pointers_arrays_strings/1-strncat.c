#include "main.h"

/**
  * _strncat - Concatenate two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (i < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		i++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
