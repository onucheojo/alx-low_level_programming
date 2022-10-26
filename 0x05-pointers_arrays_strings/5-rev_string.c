#include "main.h"

/**
 * rev_string -function reverse's a string
 * @s - input for the function
 * return - always 0
 **/
void rev_string(char *s)
{
	int count, x;
	char *strv;
	count = 0;
	x = 0;

	while (count >= 0)
	{
		if(s[count] == '\0')
		{
			break;
		}
		count++;
	}
	while (count >= 0)
	{
		*(strv + x) = s[count];
		x++;
		count--;
	}


	while (count <= x)
	{
		s[count] = strv[count];
		count++;
	}
}
