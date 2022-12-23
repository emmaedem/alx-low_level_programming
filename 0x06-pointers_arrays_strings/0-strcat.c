#include "main.h"

/**
 * _street  -concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 Return: pointer to destination string
*/
char *strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
