#include "main.h"

/**
 * _evaluate - evaluates function sqrt
 * @i: integer
 * @num: integer
 *
 * Return: evaluate sqrt
 */

int _evaluate(int i, int num)
{
	/**evaluate function*/
	if
		(num == 0 || num == 1)
		return (num);

	else if (i * i < num)
	return (_evaluate(i + 1, num));

	/*condition based*/
	else if (i * i == num)
		return (1);
	return (-1);
	return (-1);
}
/**
 * _sqrt_recursion - square root of a number
 * @n: integer
 *
 * Return: sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	/*if n is negative*/
	if
		(i < 0)
		return (-1);

	else
	{
		/*recursive call*/
		return (_evaluate(i, n));
	}
}
