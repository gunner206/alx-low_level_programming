#ifndef DOG_H
#define DOG_H


/**
 * dog_t - dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#include <stdio.h>
#include <stdlib.h>
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
