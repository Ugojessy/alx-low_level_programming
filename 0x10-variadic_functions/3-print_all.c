#include "variadic_functions.h"

/**
 * print_all - prints any thing of any type
 * @format: format of things to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j, p = 0;
	va_list things_to_print;
	char *next, fmt[5] = "cifs";

	va_start(things_to_print, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (fmt[j] != '\0')
		{
			if (format[i] == fmt[j] && p != 0)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(things_to_print, int)), p = 1;
			break;
		case 'i':
			printf("%d", va_arg(things_to_print, int)), p = 1;
			break;
		case 'f':
			printf("%f", va_arg(things_to_print, double)), p = 1;
			break;
		case 's':
			next = va_arg(things_to_print, char *), p = 1;
			if (next)
			{
				printf("%s", next);
				break;
			}
			printf("(nil)");
			break;
		}
		i++;
	}
	printf("\n");
}
