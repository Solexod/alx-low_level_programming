#include "main.h"
<<<<<<< HEAD
/**
 *_strcpy - copies the string pointed to by src
 *@dest: A pointer to a char that will be changed
 *@src: A pointer to a char that will be changed
 *Return: dest
=======
#include <stdio.h>

/**
 *_strcpy - copy string including the terminating null byte
 *@dest: destination of string
 *@src: source of string
 *
 *Return: the value dest
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
 */

char *_strcpy(char *dest, char *src)
{
<<<<<<< HEAD

int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

=======
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
