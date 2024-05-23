#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, or -1 if not found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t i;
	size_t mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
