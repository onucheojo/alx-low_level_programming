#include <stdio.h>
#include "main.h"

int main()
{
	int a, b;
	a = 70;
	b = 90;
	printf("a = %d\n b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d\n b = %d\n", a, b);

	return (0);
}
