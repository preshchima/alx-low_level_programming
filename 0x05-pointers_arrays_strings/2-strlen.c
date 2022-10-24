#include "main.h"
/**
 * _strlen - return the length of str
 * @s: string variable
 *
 * Return: length of the string
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
