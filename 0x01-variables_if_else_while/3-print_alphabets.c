#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, j;

	for (x = 'A'; x <= 'Z'; x++)
	{
		y = tolower(x);
		putchar(y);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
