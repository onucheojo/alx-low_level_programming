#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string to stdout in reverse
 * @s - pointer to input string
 * return - always zero
 **/

void print_rev(char *s)
{
	int count, x;
	char *n;

	count = 0;
	n = s;
	x = 0;

	while (*(n + x) != '\0')
	{
		count++;
		x++;
	}
	for (; count >= 0; count--)
	{
		_putchar(*(n + count));
	}
	_putchar('\n');
}
