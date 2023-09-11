#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog and copies name and owner
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner's name of the new dog
 * Return: Pointer to the new dog struct or NULL if allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

	/*Allocate memory for the new dog struct*/
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/*Allocate memory and copy the name*/
	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/*Allocate memory and copy the owner*/
	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	/*Set the new dog's values*/
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
