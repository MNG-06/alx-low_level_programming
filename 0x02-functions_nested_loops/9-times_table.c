#include "main.h"

/**
  * times_table - print the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int t, u, v, w, x;

	for (t = 0; t <= 9; t++)
	{
		for (u = 0; u <= 9; u++)
		{
			v = t * u;

			if (v > 9)
			{
				w = v % 10;
				x = (v - w) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(x + '0');
				_putchar(w + '0');
			}
			else
			{
				if (u != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(v + '0');
			}
		}

		_putchar('\n');
	}
}
