#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: char to be printed
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriate
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
