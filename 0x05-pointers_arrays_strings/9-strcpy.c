#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * including the terminating null byte "\0"
 * @src - source string
 * @dest - destination string
 * Return - value of dest
 **/

char *_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while (i >= 0)
	{
	        dest[i] = src[i];
		if(src[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (dest);
}
