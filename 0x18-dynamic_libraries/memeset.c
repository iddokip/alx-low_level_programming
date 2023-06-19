#include "main.h"
/**
 * _memset - fill a block of memory value
 * @s: starting address of memory
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
