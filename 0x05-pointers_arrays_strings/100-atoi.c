#include "main.h"

/**
 * _atoi - converts integers in a string to an int value
 * @s: string to be converted
 * Return: always an int
 **/

int _atoi(char *s)
{
	int count;

	for (count = 0; count >= 0; count++)
	{
		if (s[count] == ('-' || '+'))
		{
			if (s[count + 1] == ('-' || '+'))
			{
				s[count + 1] = s[count] + s[count + 1];
				continue;
			}
			else
			{
				return (s[count]);
				continue;
			}
		}
		if (s[count] >= 48 && s[count] <= 57)
		{
			return (s[count]);
		}
		if (!(s[count + 1] >= 48 && s[count + 1] <= 57)
		   && (s[count] >= 48 && s[count] <= 57))
		{
			break;
		}
	}
}
