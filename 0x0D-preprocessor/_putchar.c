#include <unistd.h>

/**
 * writes the put character in c to stdout
 * Return: On success 1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
