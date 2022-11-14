#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);

	while (*src != '\0')
	{
		dest[len] = *src;
		src++;
		len++;
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
