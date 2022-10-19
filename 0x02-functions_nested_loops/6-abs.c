#include "main.h"

/**
 * _abs - to calculate the absolute value of an integer
 * @n: an int type number
 * Return: to return the absolute value of @n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
