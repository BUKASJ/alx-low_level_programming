#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to a string
 *
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pl - palindrome
 * @s: pointer to string
 * @a: position
 * Return: boolean
 */

int pl(char *s, int a)
{
	if (a < 1)
	{
		return (1);
	}
	if (*s == *(s + a))
	{
		return (pl(s + 1, a - 2));
	}
	return (0);
}

/**
 * is_palindrome - string is a palindrome
 * @s: pointer to string
 *
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pl(s, len - 1));
}
