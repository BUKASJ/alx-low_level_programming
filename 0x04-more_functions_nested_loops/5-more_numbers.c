#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * @n: numbers to be printed
 *
 * Return: printed numbers
 */

void more_numbers(void)
{
	int num, a;

	for (a = 0; a <= 9; a++)
	{
		if (num > 9)
		{
			_putchar((num / 10) + '0');
		}
		_putchar((num % 10) + '0');

		_putchar('\n');
	}
}
