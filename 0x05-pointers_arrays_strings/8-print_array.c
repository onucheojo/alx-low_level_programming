#include "main.h"
#include <stdio.h>

/**
 * print_array - prints values of elements in an array
 * @a - pointer to the array to be printed
 * @n - number of arrays to be printed
 * Return - Always zero
 **/

void print_array(int *a, int n)
{
	int count;
	count = 0;

	while (count < n)
	{
		if(count + 1 == n)
		{
			printf("%d", a[count]);
			break;
		}
		printf("%d, ", a[count]);
		count++;
	}
	printf("\n");
}
