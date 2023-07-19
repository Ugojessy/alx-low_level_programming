#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k;

	k = 48;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 63; j++)
		{
			if (j > 57)
			{
				_putchar(49);

				if (k == 58)
					k = 48;
			}

			_putchar(k);

			k = k + 1;
		}

		k = 48;
		_putchar('\n');
	}
}
