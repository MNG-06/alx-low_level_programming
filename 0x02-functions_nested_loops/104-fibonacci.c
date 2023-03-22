#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int u;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int v = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (u = 1; u < 91; u++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / v);
	bef2 = (bef % v);
	aft1 = (aft / v);
	aft2 = (aft % v);

	for (u = 92; u < 99; ++u)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % v);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}

