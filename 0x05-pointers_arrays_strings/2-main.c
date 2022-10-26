#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str;
	int len, len2;

    str = "My first strlen!";
    len = _strlen(str);
    len2 = strlen(str);
    printf("%d\n%d\n", len, len2);
    return (0);
}
