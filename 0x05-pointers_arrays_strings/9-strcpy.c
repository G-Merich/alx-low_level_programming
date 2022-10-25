#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0)'
 * to the buffer pointed to the dest
 * @dest: copy sourse to this buffer
 * @src: this is the sourse to copy
 * Return: copy of the original sources
 */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; v <= _strlen(src); v++)
		dest[v] = src[v];

	return (dest);
}
