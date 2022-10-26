#include "main.h"

/**
 * puts2 - prints character in an odd number in a string
 * @str - pointer to input
 * Return - always zero
 **/

void puts2(char *str)
{
	int count;

	for (count = 0; count >= 0; count++)
	{
		if(str[count] == '\0')
		{
			break;
		}
		if(count % 2 == 1)
		{
			continue;
		}
		_putchar(str[count]);
	}
	_putchar('\n');
}
