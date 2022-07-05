#include "main.h"

/**
 * main - Entry Block
  *Description: prints _putchar followed by a new line
 * Return: 0
 */
int main(void)
{
	char d[8] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(d[i]);
		i++;
	}
	_putchar('\n');
	return (0);
