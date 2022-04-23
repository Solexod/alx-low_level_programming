#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: pointer
=======

/**
 * _puts - prints a string
 * @str: string
 *
 * Return: nothing
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
 */

void _puts(char *str)
{
<<<<<<< HEAD
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
=======
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
