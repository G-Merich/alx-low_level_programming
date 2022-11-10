#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = 0, index, n;

	while (str[index] != '\0')
		index++;

	if (index % 2 == 0)
		n = index / 2;
	else
		n = (index +1) /2;

	for (len = n; len < index; len++)
		_putchar(str[len]);

	_putchar('\n');
}
