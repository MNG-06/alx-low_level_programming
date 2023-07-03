#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function that prints a string,
 * @s: Inputting string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s++);
	_puts_recursion(s);
}
