#include <stdio.h>
/**
 * main - Entry
 *
 * Description: prints the numbers in base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char lw;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lw = 'a'; lw <= 'f'; lw++)
		putchar(lw);

	putchar('\n');

	return (0);
}
