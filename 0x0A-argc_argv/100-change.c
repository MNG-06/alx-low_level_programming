#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "main.h"

/**
 * coinConverter - Helping function that does all the mathematical calculations
 * @i: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int coinConverter(int i)
{
	int cents, coins = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
cents = atoi(argv[1]);
while (cents > 0)
{
	coins++;
	if ((cents - 25) >= 0)
	{
		cents -= 25;
		continue;
	}
	if ((cents - 10) >= 0)
	{
		cents -= 10;
		continue;
	}
	if ((cents - 5) >= 0)
	{
		cents -= 5;
		continue;
	}
	if ((cents - 2) >= 0)
	{
		cents -= 2;
		continue;
	}
	cents--;
}
printf("%d\n", coins);
return (0);
}
