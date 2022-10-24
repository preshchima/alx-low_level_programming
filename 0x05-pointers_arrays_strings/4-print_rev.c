#include "main.h"
/**
 * print_rev - reverses string value
 * @s: string value to be reversed
 *
 */

void print_rev(char *s)
{
	int max, i;

	max = _strlen(s) - 1;

	for (i = max; i >= 0; i--)
	{
		if (*s != '\0')
			_putchar(s[i]);
	}

	_putchar('\n');
}

/**
 * _strlen - prints length of string
 * @s: string value
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int str_len = 0;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	return (str_len);
}
