#include <stdio.h>

/**
 * main - prints out the sum of even fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int a;
	long int b, c, d, sum;

	b = 1;
	c = 2;
	sum = 2;

	for (a = 0; a <= 30; a++)
	{
		if (c > 4000000)
			break;

		d = b + c;

		if (d % 2 == 0)
			sum += d;

		b = c;
		c = d;
	}
	printf("%ld\n", sum);

	return (0);
}
