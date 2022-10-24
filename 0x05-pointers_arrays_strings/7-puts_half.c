#include "main.h"

/**
 * _strlen - return the lenght of a string.
 * @s: string
 * Return: lenght.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	/*find the index to start depending on the even/odd amount of strlen*/
	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = (len / 2);

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
