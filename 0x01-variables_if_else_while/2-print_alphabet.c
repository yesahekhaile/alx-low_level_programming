#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 'A'; x <= 'Z'; x++)
	{
		y = tolower(x);
		putchar(y);
	}
	putchar(10);
	return (0);
}
