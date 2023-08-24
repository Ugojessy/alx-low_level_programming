#include "3-calc.h"

/**
 * main - performs simple operations (add, sub, mul, div and mod)
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*opr)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	opr = get_op_func(argv[2]);

	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = opr(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", res);

	return (0);
}
