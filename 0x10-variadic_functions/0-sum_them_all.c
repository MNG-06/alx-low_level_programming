#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*sum_them_all - A function that returns the sum of all its parameters.
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	int sum = 0;
	unsigned int i;

	va_start(li, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(li, int);
	}

	va_end(li);
	return (sum);
}
