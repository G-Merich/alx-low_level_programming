#include "main.h"

/**
 * print_alphabet - to print alphabet in lowercase alphabet to stdout.
 * Return: 0 when successful.
 */
void print_alphabet(void)
{
	char o = 'a';

	while (o <= 'z')
	{
		_putchar(o);
		o++;
	}
	_putchar('\n');
}
