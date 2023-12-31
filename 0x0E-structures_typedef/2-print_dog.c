#include "dog.h"

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to the dog structure
 *
 * Description: This function prints the name, age, and owner of a dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
