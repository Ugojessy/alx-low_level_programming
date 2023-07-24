#include <string.h>
#include <stdio.h>
#include "main.h"

int *add_numbers(char *n1, char *n2, int len1, int len2);

/**
 * infinite_add - add two numbere
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: pointer to where to store the result;
 * @size_r: size of r
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, big;
	int *res;
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	i = 0;
	j = 0;

	if (len1 >= len2)
	{
		big = len1;
		if (big + 1 >= size_r)
			return (0);
		res = add_numbers(n1, n2, len1, len2);
	}
	else
	{
		big = len2;
		if (big + 1 >= size_r)
			return (0);
		res = add_numbers(n2, n1, len2, len1);
	}

	if (res[0] > 9)
	{
		r[1] = (res[0] % 10) + 48;
		r[0] = 49;
		j = 2;
		i = 1;
	}
	while (i < big)
	{
		r[j] = res[i] + 48;
		i++;
		j++;
	}

	r[i + 1] = '\0';

	return (r);
}

/**
 * add_numbers - adds two numbers
 * @n1: the first number;
 * @n2: the sencond number
 * @len1: length of the first number
 * @len2: length of second number
 *
 * Return: array of integers
 */
int *add_numbers(char *n1, char *n2, int len1, int len2)
{
	int i, j, k, l, num, rem = 0;
	static int d[500];

	j = len2 - 1;
	k = len1 - len2 - 1;
	for (i = len1 - 1; i > k; i--)
	{
		num = rem + (n1[i] - 48) + (n2[j] - 48);
		if (num > 9)
		{
			num = num - 10;
			rem = 1;
		}
		else
		{
			rem = 0;
		}
		d[i] = num;
		j--;
	}
	for (l = i; l >= 0; l--)
	{
		num = rem + n1[l] - 48;
		if (num > 9)
		{
			num = num - 10;
			rem = 1;
		}
		else
		{
			rem = 0;
		}
		d[l] = num;
	}
	if (rem == 1)
		d[0] += 10;

	return (d);
}
