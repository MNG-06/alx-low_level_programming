#include "main.h"

/**
  * print_diagonal - Draw a diagonal line on the terminal
  * @n: is the number of times to print diagonal line
  *
  * Return: empty
  */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < x; b++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
