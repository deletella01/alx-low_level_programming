#include "main.h"

/**
* swap_int - this function swaps the value of two int
*
* @a: Value a which will be swapped
* @b: Value b which will bw swapped
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
