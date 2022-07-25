#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @c: array of chars
 * @size: the size of the memory to print
 *
 * Return: address of the memory to print
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *iArray;

	if (size == 0)
		return (NULL);

/* returns a pointer to the allocated memory */
	iArray = malloc(size * sizeof(char));

	if (iArray == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		iArray[i] = c;
		i++;
	}
	return (iArray);
}
