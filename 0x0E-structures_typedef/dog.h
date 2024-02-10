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
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
