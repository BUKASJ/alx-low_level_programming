#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		/*add s*/
		_print_rev_recursion(s + 1);
		/*print s*/
		_putchar(*s);
	}
}
