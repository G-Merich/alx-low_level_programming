#include "dog.h"
#include <stdlib.h>

/**
 *Prints the size of a string in bytes
 */
int _strlen(char *s)
{
	int num;

	num = 0;
	while (*s != 0)
	{
		num++;
		s++;
	}
	return (num);
}

/**
 *Pointer to be copied
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != 0; dest++, src++, i++)
	{
		*dest = *src;
	}
	for (*dest = 0; i > 0; dest--, src--, i--)
	{
	}
	return (dest);
}

/**
 *Return: the variable already initialized
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_name = malloc(sizeof(char) + _strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) + _strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
