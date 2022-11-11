#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory
 * @size: size of byte of element to be allocated
 * @nmemb: allocates memory for array
 *
 * Return: returns pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *q;
	unsigned int r;

	if (nmemb == 0 || size == 0)
		return (NULL);
	q = malloc(nmemb * size);
	if (q ==  NULL)
		return (NULL);
	for (r = 0; r < (nmemb * size); r++)
		q[r] = 0;
	return (q);
}
