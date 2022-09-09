#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* This program will assign a random number to the variable n and will output
* if the last digit of n is 5 or greater, is 0, or is less than 6 but
* not 0.
*
* Return: 0
*/

int main(void)
{
	int n;
	int lastdigit = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;
	if ( lastdigit > 5 )
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	} else if ( lastdigit == 0 )
	{
		printf("Last digit of %d is %d and is 0", n, lastdigit);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	}
	printf("\n");
	return (0);
}
