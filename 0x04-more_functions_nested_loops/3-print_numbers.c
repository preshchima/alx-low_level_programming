#include "main.h"
/**
 * print_numbers - print num 0 - 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
		_putchar(i++ + '0');

	_putchar('\n');
}
