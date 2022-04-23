#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * rev_string - reverses string.
 *
 * @s: pointer
=======

/**
 * rev_string - print string in reverse
 * @s: pointer
 *
 * Return: nothing
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
 */

void rev_string(char *s)
{
<<<<<<< HEAD

int i, len, mid;
char hold;

for (len = 0; s[len] != '\0'; len++)
;

i = 0;
mid = len / 2;

while (mid--)
{
hold = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = hold;
i++;
}
=======
	int i, l, len = 0;
	char c;

	while (s[len])
	{
		len++;
		l = len - 1;
	}

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[l];
		s[l] = c;
		l--;
	}
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
