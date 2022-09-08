#include<stdio.h>

/**
* main - Entry point
* This program prints the size of various types on the computer it is
* compiled and run on. it uses printf to display declared statements of
* type char, int, long int, long long int, float.
* Return: 0
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
