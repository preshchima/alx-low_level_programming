#include "main.h"
#include <stdio.h>
/**
 * print_aray - Print an array upto n
 * @a: the array of elements
 * @n: the number of elements of the arrat
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}

