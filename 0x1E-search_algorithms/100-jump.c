#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located,
 * or -1 if the value is not present or the array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
		prev = 0;

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (step >= size || array[step] >= value)
			break;
		prev = step;
		step += sqrt(size);
		if (step > size - 1)
			step = size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	for (i = prev; i < step && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
