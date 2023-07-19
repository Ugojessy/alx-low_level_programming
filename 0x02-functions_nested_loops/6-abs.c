#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @c: number to be checked
 *
 * Return: returns the absolute value of the number given
 */
int _abs(int c)
{
	if (c > 0)
		return (c);
	else
		return (-c);
}
