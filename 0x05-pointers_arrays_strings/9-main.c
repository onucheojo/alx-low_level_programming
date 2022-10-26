#include <stdio.h>
#include "main.h"

/**
 int main(void)
{
	char *s, *d;
	s = "my name is emmanuel\n";

	_strcpy(d, s);
	printf("%s", d);

	return (0);
}
**/


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
