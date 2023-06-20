#include "dog.h"

/**
 * _strcopy - fonction tha copies string
 * @dest: to be copied to
 * @src: to copie
 *
 * Return: dest
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlength - a fnction that calculates length
 * @str: string
 *
 * Return: length of str
 */
int _strlength(char *str)
{
	int i;
	int length = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		length++;

	return (length);
}

/**
 * *new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(dog_t) * (_strlength(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(dog_t) * (_strlength(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
