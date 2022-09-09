#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* This program will assign a random number to a variable n each time it is
* executed and it would print if the number assigned to n
* is positive or negative.
* I make use of if statements to check if n is greater than 0 (positive), less
* than 0 (negative), or equal to 0.
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		/* if n is greater than zero, then n is positive*/
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		/* if n is less than zero, then n is negative*/
		printf("%d is negative\n", n);
	} else
	{
		/* if n is neither greater than or equal to zero, then it is zero */
		printf("%d is zero\n", n);
	}

	return (0);
}
