#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{

	char charType;
	int intType;
	long int  longIntType;
	long long longlongType;
	float floatType;
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a char: %zu byte(s)\n", sizeof(intType));
	printf("size of a char: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a char: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
