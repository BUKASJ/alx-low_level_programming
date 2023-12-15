#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num;
	char *endian_check = (char *) &num;
	return ((int)*endian_check);
}
