#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char din;

	while (count++ <= 9)
	{
		for (din = 'a'; din <= 'z'; din++)
			_putchar(din);
		_putchar('\n');
	}
}
