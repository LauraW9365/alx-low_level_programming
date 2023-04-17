#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer to new_dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog;
	unsigned int j, k, l = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (j = 0; name[j]; j++)
		;
	j++;
	new_dog->name = malloc(j * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (l = 0; l < j; l++)
		new_dog->name[l] = name[l];
	new_dog->age = age;

	for (k = 0; owner[k]; k++)
		;
	k++;
	new_dog->owner = malloc(k * sizeof(char));

	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	for (l = 0; l < k; l++)

		new_dog->owner[l] = owner[l];
	return (new_dog);

}
