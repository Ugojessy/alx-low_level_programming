#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @seperator: seperator of strings
 * @n: number of strings passed to function
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i, j;
	char *next;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		next = va_arg(strings, char *);

		if (next)
			printf("%s", next);
		else
			printf("(nil)");

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
	printf("\n");
}
