#include "main.h"

/**
 * print_alphabet - print alphabet in lowercases followed by a new line
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n')
}
