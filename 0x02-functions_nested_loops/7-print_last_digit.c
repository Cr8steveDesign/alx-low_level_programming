#include "main.h"
/**
 * print_last_digit- prints last digit of a number
 * @n: The character to compare
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		int m = n % 10;

		m = (m * -1);

		_putchar('0' + m);
		return (m);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}

}
