#include "main.h"
/**
 * _strncpy - copies the src string to the dest str at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: interger bytes to be printed from src
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
