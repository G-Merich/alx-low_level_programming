#include "main.h"

/**
 * print_alphabet_x10 - to print lowercase alphabet 10 times
 * Return: 0 when successful.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char o;

	while (i < 10)
	{
		o = 'a';
		while (o <= 'z')
		{
			_putchar(o);
			o++;
		}
		_putchar('\n');
		i++;
	}
}
