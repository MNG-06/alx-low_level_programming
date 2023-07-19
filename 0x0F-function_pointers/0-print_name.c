#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: String to be printed out
 * @f: Function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;

	ptr = f;
	ptr(name);
}
