#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal using '\'
 * @n: number of times '\' will be printe
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	for (x = ; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar (' ');

		_putchar('\\');
		_putchar('\n');
	}
}
