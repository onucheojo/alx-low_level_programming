#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second interger
 * return - always zero
 **/

void swap_int(int *a, int *b)
{
	int y, z;

	y = *a;
	z = *b;
	*a = z;
	*b = y;
}
