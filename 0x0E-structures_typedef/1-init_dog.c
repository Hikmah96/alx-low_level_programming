#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - intialize a variable of type struct
 * @d: pointer to struct dog
 * @name: member one
 * @age: member two
 * @owner:member three
 *
 * Description: long description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
