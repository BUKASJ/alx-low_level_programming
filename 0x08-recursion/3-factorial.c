#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer to be returned
 * @Factorial of 0 is 1
 *
 * Return: -1 if n < 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * !(n - 1));
}
