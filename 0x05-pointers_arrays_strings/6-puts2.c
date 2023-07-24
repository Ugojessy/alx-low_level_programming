#include <string.h>
#include "main.h"

/**
 * puts2 - prints every even character in a string
 * @str: the pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
