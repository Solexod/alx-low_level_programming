#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * print_rev - prints a string reversed.
 *
 * @s: pointer
=======

/**
 * print_rev - print string in reverse
 * @s: characters
 *
 * Return: nothing
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
 */

void print_rev(char *s)
{
<<<<<<< HEAD
int i = 0;

while (s[i])
i++;
while (i--)
_putchar(s[i]);
_putchar('\n');
=======
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (i)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
