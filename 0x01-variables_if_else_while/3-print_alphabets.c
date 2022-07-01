#include <stdio.h>
/**
  * main - entry block
  * Description: prints the alphabet 
  * Return: 0
**/
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
