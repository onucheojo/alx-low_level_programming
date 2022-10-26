#include <stdio.h>
#include "main.h"

int main(void)
{
	char str[10] = "my school";
	printf("Before: %s\n", str);
	rev_string(str);
	printf("After: %s\n", str);

	return (0);
}
