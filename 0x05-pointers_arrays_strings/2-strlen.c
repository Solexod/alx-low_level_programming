#include "main.h"

/**
<<<<<<< HEAD
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
=======
 * _strlen - count the length of a string
 * @s: string
 *
 * Return: the Value of the lenght i
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
 */

int _strlen(char *s)
{
<<<<<<< HEAD
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
=======
	int i = 0;

	while (s[i])
		i++;

	return (i);
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
