#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	for (i = 0; i < size; i = i + 10)
	{
		printf("%08x:", i);

		for (j = 0; k < 10; k++)
		{
			if (j + i >= size)
				printf(" ");
			else
				printf("%02x", b[i + j]);
			if (j % 2 != 0 && j != 0)
				printf(" ");
		}

		for (k = 0; k < 10; k++)
		{
			if (k + i >= size)
				break;
			if (b[i + k] > 32 || b[i + k] < 127)
				printf("%c", b[i + k]);
			else
				printf(".");
		}
		if (i >= size)
			continue;

		printf("\n");
	}
	
	if (size <= 0)
		printf("\n");
}
