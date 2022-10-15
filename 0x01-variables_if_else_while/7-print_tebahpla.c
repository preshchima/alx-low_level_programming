#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the alphabets in revrse
 *
 * Return: Always 0
 */
int main(void)
{
	char rv;

	for (rv = 'z'; rv >= 'a'; rv--)
		putchar(rv);

	putchar('\n');

	return (0);
}
