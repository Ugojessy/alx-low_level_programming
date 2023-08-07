#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to array or NULL if failed
 */
int *array_range(int min, int max)
{
	int *arr, i, len = 0, start = min;

	if (min > max)
		return (NULL);

	while (start <= max)
	{
		len++;
		start++;
	}

	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)

	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
