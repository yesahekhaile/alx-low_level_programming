#include "main.h"
/**
 * main - main function dispaly _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
	_putchar(b[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}

