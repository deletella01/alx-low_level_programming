#include <stdio.h>

/**
* main - Entry point
*
* This program prints alphabet in lowercase and then uppercase.
*
* Return: 0
*/

int main(void)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(tolower(ch));
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
