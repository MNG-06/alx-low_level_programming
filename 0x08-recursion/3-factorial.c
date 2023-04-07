#include "main.h"

/**
 * factorial - Returning the factorial of a given number
 * @n: The number with which the factorial is returned from
 *
 * Return: n factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
