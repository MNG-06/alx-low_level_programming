/*#include <stdio.h>*/
#include <unistd.h>
/*#include "main.h"*/

/**
 * _putchar - Write char c to stdout.
 * @c: The character to print.
 * Return: 1 on success.
 * -1 is returned on error, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
