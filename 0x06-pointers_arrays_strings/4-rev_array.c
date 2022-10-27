#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int m;
	int q;

	for (m = 0; m < n; m++)
	{
		n--;
		q = a[m];
		a[m] = a[n];
		a[n] = q;
	}
}

