#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings.
 * @dest: input parameter
 * @src: input parameter
 * @n: bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[y] != '\0')
		y++;
	while (src[x] != '\0' && x < n)
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';

	return (dest);
}
