#include "main.h"

/**
 * reverse_array - Function prototype
 * Description: Reverses the array
 * @a: Pointer to an array of integers
 * @n: The number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
