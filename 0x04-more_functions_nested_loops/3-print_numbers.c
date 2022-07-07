#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line.
 * Return: void.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
