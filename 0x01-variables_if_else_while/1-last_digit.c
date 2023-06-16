#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastdign;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	lastdign = n % 10;
	if (lastdign > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdign);
	} else if (lastdign == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdign);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdign);
	}
	return (0);
}
