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
	dog_t *new_dog;
	char *name_cpy;
	char *owner_cpy;
	int len_name = 0;
	int len_owner = 0;
	int i;

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_cpy = malloc(len_name + 1);
	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';
	owner_cpy = malloc(len_owner + 1);
	if (owner_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';
	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;
	return (new_dog);
}
