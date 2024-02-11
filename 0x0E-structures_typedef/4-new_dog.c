#include "dog.h"

/**
 * new_dog -creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));

	/* check if malloc was successful */
	if (newDog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the name and owner */
	newDog->name = malloc(strlen(name) + 1);
	newDog->owner = malloc(strlen(owner) + 1);
	/* check if any of the above mallocs failed */
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	/* copy the name and owner to the new dog */
	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);

	/* set the age of the new dog */
	newDog->age = age;

	return (newDog);
}

