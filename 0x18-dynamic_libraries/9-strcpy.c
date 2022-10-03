#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string
 * @dest: A buffer to copy the string to
 *  @src: The source string to copy.
 *  Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y;

	while (src[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}

	dest[y] = '\0';

	return (dest);
}
