#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x < '9')
		{
		putchar(44);
		}
		if (x < '9')
		{
		putchar(32);
		}
	}
	return (0);
}
