#include "main.h"

/**
 * print_sign - prints the sign of a num
 * @n: the num of the sign t be printed
 * Return: 1 if num is greater than 0
 * 0 of num is 0
 * -1 if num is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	{
		_putchar('-');
		return (-1);
	}
}
