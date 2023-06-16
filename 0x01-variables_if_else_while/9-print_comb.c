#include <stdio.h>

/**
 * main - entry point
 *
 * Return:Always 0 (Success)
 */
int ,aim(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}	
