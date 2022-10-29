#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int x = 0;
	char *str1;

	str1 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	while (str1[x] != '\0')
	{
		putchar(str1[x]);
		x++;
	}
	putchar('\n');
//	write(2, str1, 59);
	return(1);
}
//and that piece of art is useful" - Dora Korpar, 2015-10-19
