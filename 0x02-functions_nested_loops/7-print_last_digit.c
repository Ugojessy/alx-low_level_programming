#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: input number
 *
 * Return: returns the value of the last digit
 */
int print_last_digit(int c)
{
	int l = c % 10;

	if (l > 0)
	{
		_putchar(l + 48);
		return (l);
	}
	else
	{
		_putchar(-l + 48);
		return (-l);
	}
}
