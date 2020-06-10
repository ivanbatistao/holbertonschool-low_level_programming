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

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longLongType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
