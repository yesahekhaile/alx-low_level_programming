#include <stdio.h>
/**
 * main - Everything run here
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;

for (x = 'z'; x >= 'a'; x--)
{
	putchar(x);
}
putchar(10);
return (0);
}


