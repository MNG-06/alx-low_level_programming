#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Return only if its a prime number
 * @n: the number to be examined
 *
 * Return: 1 if n is prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1);
}

/**
 * check_prime - Checking if its a prime number
 * @n: the number to be examined
 * @i: the iterator
 *
 * Return: 1 if n prime or 0 if not
 */
int prime_number(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (prime_number(n, i + 1));
}
