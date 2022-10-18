#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int num;
	char lw;

	for (num = 0; num < 10; num++)
	{
		for (lw = 'a'; lw <= 'z'; lw++)
			_putchar(lw);
		_putchar('\n');
	}
}
