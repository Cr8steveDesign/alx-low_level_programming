#include "main.h"
/**
 * _print_last_digit- prints last digit of a number
 * @n: The character to compare
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		int m = n % 10;

		return (m * -1);
	}
	else
	{
		return (n % 10);	
	}

}
