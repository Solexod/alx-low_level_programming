#include "main.h"
<<<<<<< HEAD

/**
 *puts_half - prints every other character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void puts_half(char *str)

{
int i, last;

i = 0;
while (str[i] != '\0')
{
i++;
}

last = (i + 1) / 2;

for (i = last; str[i]; i++)
{
_putchar (str[i]);
}

_putchar ('\n');

=======
#include <stdio.h>

/**
 *puts_half - print half string
 *@str: string
 *
 *Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (j >= i / 2)
				_putchar(str[j]);
		}
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (j > i / 2)
				_putchar(str[j]);
		}
	}
	_putchar('\n');
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
