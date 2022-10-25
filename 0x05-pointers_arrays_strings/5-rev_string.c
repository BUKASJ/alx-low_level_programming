#include "main.h"

/**
 * rev_string - reverses a string
 *@s: str
 */

void rev_string(char *s)
{
	char bn = s[0];
	int j = 0;
	int i;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		bn = s[i];
		s[i] = s[j];
		s[j] = bn;
	}
}
