#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
	int max, i;

	char tmp;

	max = _strlen(s) - 1;

	for (i = 0; i < max; i++)
	{
		tmp = s[i];
		*(s + i) = s[max];
		s[max] = tmp;
		max--;
	}
}

/**
 * _strlen - gets string length
 * @s: string value
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
