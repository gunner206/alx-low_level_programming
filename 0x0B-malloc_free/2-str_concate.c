#include "main.h"
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)	
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	
	string = malloc(sizeof(char) * (i + j + 1));
	
	if (string == NULL)
		return(NULL);
	i = j = 0;
	while ( s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	
	while (s2[j] != '\0')
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	return (string);
}

