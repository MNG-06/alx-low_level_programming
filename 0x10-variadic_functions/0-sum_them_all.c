#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Is the number of all parameters
 * @...: A variable number to culculate the required sum
 * 
 * Return: ...
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(ap, n);

		while (x < n)
		{
			sum += va_arg(ap, int);
			x++;
		}

		va_end(ap);
		return (sum);
	}

	return (0);
}
