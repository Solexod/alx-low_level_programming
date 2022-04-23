#include "main.h"

/**
<<<<<<< HEAD
 * swap_int - swap the valuses of two integers a and b
 *@a: A pointer to an int that will be updated
 *@b: B pointer to an int that will be updated
 * Return: void that means our answer is correct
 */

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
=======
 * swap_int - swap numbers function
 * @a: integer
 * @b: integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
