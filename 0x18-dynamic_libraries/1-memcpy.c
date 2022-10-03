#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @src: memory area
 * @dest: memory area
 * @n: size of bytes
 * Return: value of dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *t = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (t);
}
