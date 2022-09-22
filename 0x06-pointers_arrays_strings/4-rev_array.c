#include "main.h"

/**
* reverse_array - this function reverse the content of an array of integers
* @a: pointer to the array of integers
* @n: number of element(s) in the array
*
* Return: an array in reverse
*/
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
