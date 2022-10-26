#include "main.h"

/**
 * puts_half - prints half of the characters in a string
 * @str - pointer to the str to be printed
 * Return - always zero
 **/
void puts_half(char *str)
{
	int x, count;

	for(count = 0; count >= 0; count++)
	{
		if(str[count] == '\0')
		{
			break;
		}
	}

	if(count % 2 == 0)
	{
		x = count / 2;
		while (x < count)
		{
			_putchar(str[x]);
			x++;
		}
	}
		else
		{
			x = ((count - 1) / 2);
			while (x > count)
			{
				_putchar(str[x]);
				x++;
			}
			_putchar('\n');
		}
}
