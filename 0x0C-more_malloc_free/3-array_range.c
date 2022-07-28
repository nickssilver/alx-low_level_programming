#include "main.h"
#include <stdlib.h>
/**
 * array_range - get len, malloc * len
 * loop size of len to insert min++ into new arr
 * @min: min input
 * @max: max input
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
