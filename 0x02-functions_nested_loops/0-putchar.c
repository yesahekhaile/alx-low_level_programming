#include "main.h"
/**
 * main - main function dispaly _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b[9] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
	_putchar(b[i]);
	}
	_putchar(10);
	return (0);
}

