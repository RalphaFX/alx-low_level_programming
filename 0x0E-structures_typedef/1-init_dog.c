#include "dog.h"
#include <stdlib.h>
/**
 * init_dog  - initialize a variable of type struct dog
 * @d: pointer to type struct dog element
 * @name: name of dog
 * @age: dog age
 * @owner: owner name
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
