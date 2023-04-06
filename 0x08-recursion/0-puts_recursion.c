#include "main.h"

/**
 * _puts_recursion - print a string, then followed by \n.
 * @s - is the string to be printed.
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
