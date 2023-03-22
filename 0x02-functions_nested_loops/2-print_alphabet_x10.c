#include "main.h"

/**
 * print_alphabet_x10 - create a 10 times printout alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char v;
	int i = 0;

	while (i < 10)
	{
		for (v = 'a'; v <= 'z'; v++)
		{
			_putchar(v);
		}

		_putchar('\n');

		i++;
	}
}
