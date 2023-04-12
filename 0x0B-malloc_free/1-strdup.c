#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated
* @str:String to be copied
*Return: NULL in case of error, pointer to allocated
*space
*/
char *_strdup(char *str)
{
	char *icpy;
	int indexx, lenn;

	if (str == NULL)
		return (NULL);
	for (indexx = 0; str[indexx]; indexx++)
		lenn++;
	icpy = malloc(sizeof(char) * (lenn + 1));
	if (icpy == NULL)
		return (NULL);
	for (indexx = 0; str[indexx]; indexx++)
	{
		icpy[index] = str[indexx];
	}
	icpy[len] = '\0';
	return (icpy);
}
