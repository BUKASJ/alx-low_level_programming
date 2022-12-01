#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: unsigned long int num 1
 * @m: unsigned long int num 2
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int a, b;

	a = 0;
	result = 1;
	difference = n ^ m;
	for (b = 0; b < (sizeof(unsigned long int) * 8); b++)
	{
		if (result == (difference & result))
			a++;
		result <<= 1;
	}
	return (a);
}
