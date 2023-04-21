#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @separator: The string
 * @n: Integers passed
 * @...: A variable of numbers
 *
 * Return: ...
 */
 int main()
 {
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x = 0;

	if (n > 0)
	{
		va_start(ap, n);

		while (x < n)
		{
			printf("%d", va_arg(ap, int));

			if (x != n - 1  && separator != NULL)
				printf("%s", separator);

			x++;
		}
		va_end(ap);
	}
	printf("\n");
}
}
