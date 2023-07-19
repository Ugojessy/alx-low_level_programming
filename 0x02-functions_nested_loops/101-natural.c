#include <stdio.h>

void print_numbers(int);

/**
 * main - calls print_numbers function
 *
 * Return: returns 0
 */
int main(void)
{
	int n = 1024;

	print_numbers(n);

	return (0);
}

/**
 * print_numbers - prints the sum of multiples of 5 and 3
 * @i: number to be checked
 *
 * Return: returns nothing
 */
void print_numbers(int i)
{
	int a;
	int sum = 0;

	for (a = 0; a < i; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum += a;
	}

	printf("%d\n", sum);
}
