#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 * @c: the character to be checked
 *
 * Return: returns 1 if true and 0 otherwise
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i == 0)
		return (0);
	else
		return (1);
}
