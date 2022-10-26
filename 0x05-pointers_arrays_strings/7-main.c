#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str;

	str = "0123456789";
	printf("The whole string is: %s\n", str);
	printf("Half of the string is: ");
	puts_half(str);

	return (0);
}
