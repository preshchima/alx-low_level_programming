#include "main.h"
/**
 * _atoi - converts a str to int
 * @s: the str value
 * Return: the converted str
 */

int _atoi(char *s)
{
	short state;
	int i, minus, result;

	i = minus = result = state = 0;
	minus = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			state = 1;
		}
		else if (state == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}
