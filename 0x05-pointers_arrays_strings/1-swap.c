#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first var
 * @b: second var
 */

void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
