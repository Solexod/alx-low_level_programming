#include "main.h"

/**
<<<<<<< HEAD
 * is_numerical - check if it is a digit
 * @n: Number
 * Return: If is a number, return 1 else return 0
 */
int is_numerical(unsigned int n)
{
return (n >= '0' &&  n <= '9');
}

/**
 * _atoi - convert a string to an integer
 *@s: String
 * Return: Return the num
 */
int _atoi(char *s)
{
unsigned int number, i;
int sign;

sign = 1;
number = 0;



for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{

number = (s[i] - 48) + number * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
sign *= -1;
}

}

return (number *sign);


=======
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
