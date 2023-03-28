#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to dest.
 * @dest: buffer
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
