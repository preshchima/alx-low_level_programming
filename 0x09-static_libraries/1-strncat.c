#include "main.h"
/**
 * _strncat - appends the src string to the dest str at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: interger bytes to be printed from src
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			dest[len] = *src;
			src++;
			len++;
		}
	}
	return (dest);
}

/**
 * _strlen - gets length of str
 * @str: string value
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	return (i);
}
