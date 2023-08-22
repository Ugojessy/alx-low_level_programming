#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters it was given
 * @n: number of parameters to be given
 *
 * Return: sum or 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);

	return (sum);
}
