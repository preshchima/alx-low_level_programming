#include "main.h"
/**
 * _puts - prints a str
 * @str: string value
 *
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
