#include <stdio.h>
#include "main.h"

void print_fibonacci(int);

/**
 * main - calls print_fibonacci with 50
 *
 * Return: returns 0
 */
int main(void)
{
	int n = 50;

	print_fibonacci(n);

	return (0);
}

/**
 * print_fibonacci - prints out the fibonacci sequence of numbers
 * @i: the input number
 *
 * Return: returns nothing
 */
void print_fibonacci(int i)
{
	int a;
	long int b;
	long int l = 2;
	long int p = 1;

	printf("%ld, %ld, ", p, l);

	for (a = 3; a <= i; a++)
	{
		b = p + l;

		printf("%ld", b);

		if (a != i)
			printf(", ");

		p = l;
		l = b;
	}
	printf("\n");
}
