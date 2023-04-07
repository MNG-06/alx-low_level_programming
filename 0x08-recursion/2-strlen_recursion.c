#include "main.h"

/**
 * _strlen_recursion - Returning the length of a string
 * @s is the string to be returned
 *
 * Return: An integer
 */
int _strlen_recursion(char *s)
{
	int s = 0;

	if (*s)
	{
		return 0;
	}
	s++;
	_strlen_recursion(s + 1);
	return s;
}
