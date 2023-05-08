#include <stdlib.h>
#include "dog.h"

/**
* The name of the variable to be initialized is d
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
