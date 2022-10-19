#include "main.h"

/**
 * print_sign - to print sign of a number.
 * @n: an int that can be negative or positive
 * Description: to print +, 0, 0r -1 depends on n
 * Return: 1 when +, 0 when 0 and -1 wnen -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
