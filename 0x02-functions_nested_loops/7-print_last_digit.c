#include "main.h"

/**
 * print_last_digit - to print the last digit of a number
 * @n: int number
 * Return: to return the last digit number.
 */
int print_last_digit(int n)
{
	int ar;

	if (n < 0)
	{
		ar = -1 * (n % 10);
		_putchar(ar + '0');
		return (ar);
	}
	else
	{
		ar = n % 10;
		_putchar(ar + '0');
		return (ar);
	}
}
