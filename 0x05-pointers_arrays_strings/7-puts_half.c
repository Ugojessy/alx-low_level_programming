#include <string.h>
#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @str: the pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, st, len;

	len = strlen(str);

	if (len % 2 != 0)
	{
		st = (len + 1) / 2;
	}
	else
	{
		st = len / 2;
	}

	for (i = st; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
