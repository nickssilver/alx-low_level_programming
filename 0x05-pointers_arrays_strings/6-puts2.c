#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: input string.
 * Return: void.
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] != '\0')
		{
			if (count % 2 == 0)
			{
				_putchar(str[count]);
			}
			count++;
		} else
		{
			count = -1;
			_putchar('\n');
		}
	}
}
