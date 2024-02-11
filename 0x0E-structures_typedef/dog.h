#ifndef DOG_H
#define DOG_H
#define NULL ((void *)0)

/**
 * struct dog - dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: dog structure
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

/* Standard Library */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#endif
