#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alpha in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
