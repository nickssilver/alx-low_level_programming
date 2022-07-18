#include "main.h"
5-strstr.c 7-print_chessboard.c 8-print_diagsums.c 100-set_string.c 101-crackme_password

**
5-strstr.c 7-print_chessboard.c 8-print_diagsums.c 100-set_string.c 101-crackme_password

*_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: constant byte
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	}

	return (s);
}
