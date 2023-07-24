#include "main.h"

/**
 * swap_int - swaps the valuse of two integers
 * @a: pointer of the first integer
 * @b: pointer of the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
