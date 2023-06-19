#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialized dog
 * @d : pointer to struct dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
