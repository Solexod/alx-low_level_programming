#include "main.h"
#include <stdio.h>
<<<<<<< HEAD
/**
 *print_array - prints n elements of an array of integers
 *@a: A pointer to an int that will be updated/ changed
 *@n: return value n
 *Return: void which ,means our answer is correct
=======

/**
 *print_array - print an array
 *@n: elements of array
 *@a: array pointer
 *
 *Return: nothing
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
 */

void print_array(int *a, int n)
{
<<<<<<< HEAD
int i;
i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{														printf(", ");
}
i++;														}

printf("\n");
=======
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < (n - 1))
			printf(", ");
	}
	printf("\n");
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
