#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints down or up to 98
 * @n: number to start printing from
 *
 * Return: returns nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
