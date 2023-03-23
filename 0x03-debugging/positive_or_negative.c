#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 * Description - prints if random generated number is +tive, zero or -tive
 * Return: Always 0 (success)
 */
void  positive_or_negative(int i)
{
	
		
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is positive\n", i);
}	
