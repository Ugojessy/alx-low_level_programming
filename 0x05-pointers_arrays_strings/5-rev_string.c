#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the pointer to the  string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char old;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		old = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = old;
	}
}
