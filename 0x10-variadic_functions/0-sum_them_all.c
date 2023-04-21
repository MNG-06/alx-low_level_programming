#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Is the number of all parameters
 * @...: A variable number to culculate the required sum
 * 
 * Return: if n == 0, otherwise the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
  	unsigned int x, sum = 0;

  va_start(ap, n); 
  for (x = n; x >= 0; x = va_arg(ap, unsigned int))
    printf("%d", sum);
  va_end(ap);
  putchar('\n');

	return (sum);
}
