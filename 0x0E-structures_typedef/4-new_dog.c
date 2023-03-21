#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: its age
 * @owner: its owner
 * Return: pointer of type dog_t and
 * NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name;
	int len_owner;
	int i;
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	len_name = len_owner = 0;
	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;
	new_dog->name = malloc(len_name * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	new_dog->owner = malloc(len_owner * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= len_owner; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
