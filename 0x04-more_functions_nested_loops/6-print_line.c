#include "main.h"

/**
 * print_line - prints a line n times
 * @n: number of times the line should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}

	_putchar('\n');
}
