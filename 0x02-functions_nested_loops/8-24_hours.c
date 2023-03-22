#include "main.h"

/**
 * jack_bauer - printiing every minute of the day of Jack Bauer
 * 
 * Return: ...
 */
void jack_bauer(void)
{
	int u, v;

	u = 0;

	while (u < 24)
	{
		v = 0;
		while (v < 60)
		{
			_putchar((u / 10) + '0');
			_putchar((u % 10) + '0');
			_putchar(':');
			_putchar((v / 10) + '0');
			_putchar((v % 10) + '0');
			_putchar('\n');
			v++;
		}
		u++;
	}
}
