#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: the character to check
 *
 * Return: returns 1 if true and 0 otherwise
 */

int _islower(int c)
{
	int i = islower(c);

	if (i == 0)
		return (0);
	else
		return (1);

}
