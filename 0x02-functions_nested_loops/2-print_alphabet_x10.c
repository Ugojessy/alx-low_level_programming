#include "main.h"

/**
 * print_alphabet_x10 - prints the alpahbets followed by a new line 10 times
 * Return: return nothing
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
