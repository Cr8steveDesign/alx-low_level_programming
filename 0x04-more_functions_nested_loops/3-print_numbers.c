#include "main.h"

/**
 * print_numbers - Function prints 0 to 9
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
