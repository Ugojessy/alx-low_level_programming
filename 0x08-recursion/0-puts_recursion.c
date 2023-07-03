#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(&s[1]);
}
