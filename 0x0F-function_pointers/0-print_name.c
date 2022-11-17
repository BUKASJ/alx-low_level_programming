#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the given name
 * @f: function of the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
