#include "main.h"
#include <string.h>
/**
 * _strncpy - copy n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
