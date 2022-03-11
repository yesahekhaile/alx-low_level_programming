#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar(10);
	return (0);
}
