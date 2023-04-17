#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct_dog
 * @d: a pointer to the structure
*/

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)

		printf("Name: (nil)\n");

	else

		printf("Name: %s\n", d->name);


	if (d->owner != NULL)

		printf("Owner: %s\n", d->owner);

	else

		printf("Owner: (nil)\n");

	if (d->age > 0)

		printf("Age: %f\n", d->age);

	else
		printf("Age: (nil)\n");

}

