#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0
**/
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
