#include "main.h"

/**
 * evaluate_num - recursion loop
 * @n: number
 * @iterator: number to iterate
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int evaluate_num(int n, int iterator)
{
	if (iterator == n - 1)
	{
		return (1);
	}
	else if (n % iterator == 0)
	{
		return (0);
	}

	if (n % iterator != 0)
	{
		return (evaluate_num(n, iterator + 1));
	}
	return (0);
}
/**
 * is_prime_number - input integer is a prime number
 * @n: number
 *
 * Return:return 1 as prime, otherwise 0
 */

int is_prime_number(int n)
{
	int iterator;

	iterator = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 0)
	{
		return (1);
	}
	return (evaluate_num(n, iterator));
}
