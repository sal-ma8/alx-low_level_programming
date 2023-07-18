#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - func
 * @d: p1
 * @name: vp2
 * @age: vp3
 * @owner: vp4
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
