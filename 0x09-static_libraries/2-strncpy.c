#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: char pointer variable
 * @src: char pointer variable
 * @n: int type variable
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}

	j = i;

	for (; n > j; j++)
		dest[j] = '\0';

	return (dest);
}
