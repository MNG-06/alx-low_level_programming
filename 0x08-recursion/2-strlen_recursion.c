#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: Inputting string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
