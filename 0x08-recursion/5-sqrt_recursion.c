#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returning the natural square root of a number
 * @n: number to calculate the natural square root of
 *
 * Return: the results of the sqaure root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculating the natural square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
