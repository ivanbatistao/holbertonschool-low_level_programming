#include<stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char charType;
	int intType;
	float floatType;
	long int longIntType;
	long long int longLongType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of int: %ld bytes(s)\n", sizeof(intType));
	printf("Size of long int: %li byte(s)\n", sizeof(longIntType));
	printf("Size of long long int: %ld byte(s)\n", sizeof(longLongType));
	printf("Size of float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
