#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @c: character
 * @size: the size of the memory to print
 * Return: NULL if 0 or fail else return ptr
 */
char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	chars  = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		chars[i] = c;
	}
	return (chars);
}
