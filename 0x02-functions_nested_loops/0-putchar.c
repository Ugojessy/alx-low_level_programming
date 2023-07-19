#include "main.h"

/**
 * main - prints _putchar followed by a newline
 * Return: returns 0
 */
int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);

	_putchar('\n');

	return (0);
}
