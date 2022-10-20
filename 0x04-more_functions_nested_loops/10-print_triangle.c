#include "main.h"
/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */
void print_triangle(int n)
{
	int x, tria

		if (n > 0)
		{
			for (x = 1; x <= n; x++)
			{
				for (tria = n - x; tria > 0; tria--)
					_putchar(' ');
				for (tria = 0; tria < x; tria++)
					_putchar('#');

				if (x == n)
					continue;

				_putchar('\n');
			}
		}
	_putchar('\n');
}
