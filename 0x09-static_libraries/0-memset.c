#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: bytes to be filled
 * @s: memory area
 * @b: the byte
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)

		*ptr++ = b;

	return (s);
}
