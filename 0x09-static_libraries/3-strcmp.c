#include "main.h"
/**
 * _strcmp - compares tw strings together
 * @s1: first string
 * @s2: second string
 *
 *
 * Return: 0 if equal, positive or negative if not equal
 */

int _strcmp(char *s1, char *s2)
{
	int len, i;

	if (_strlen(s1) > _strlen(s2))
		len = _strlen(s1);
	else
		len = _strlen(s2);


	for (i = 0; i < len; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
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
