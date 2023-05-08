#include <stdlib.h>
#include "dog.h"

/**
* Free dog
*/

void free_dog(dog_t *d)
{
	dog_t *fdog = d;

	if (d != 0)
	{
		free(fdog->name);
		free(fdog->owner);
		free(fdog);
	}
}
