#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * puts2 - prints a string, followed by a new line, to stdout.
 *
 * @str: pointer
=======

/**
 * puts2 -print every other charachter of a string
 * @str: string
 *
 * Return: nothing
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
 */

void puts2(char *str)
{
<<<<<<< HEAD
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}

_putchar ('\n');
=======
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
