#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if a character is digit (0 - 9)
 * @c: the character to be checked
 *
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	int result = isdigit(c);

	if (result == 0)
		return (0);
	else
		return (1);
}
