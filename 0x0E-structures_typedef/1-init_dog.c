#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: struct name
 * @name: name of the dog
 * @age: its age
 * @owner: its owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;


	d->name = name;
	d->age = age;
	d->owner = owner;
}
