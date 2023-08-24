#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers in argument
 * @seperator: the seperator to be used in printing
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, j;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		j = 0;

		if (seperator && i != n - 1)
		{
			while (seperator[j] != '\0')
			{
				printf("%c", seperator[j]);
				j++;
			}
		}
	}

	va_end(numbers);

	printf("\n");
}
