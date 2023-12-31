#include "dog.h"

/**
 * new_dog - Creates a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the name and owner strings */
	newDog->name = malloc(strlen(name) + 1);
	newDog->owner = malloc(strlen(owner) + 1);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	/* Copy the name and owner strings */
	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);

	/* Set the age */
	newDog->age = age;

	return (newDog);
}
