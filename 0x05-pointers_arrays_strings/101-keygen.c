#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/**
 * main - generates keygen.
 * Return: 0
 */
int main(void)
{
int i = 0, j = 0;
time_t t;

srand((unsigned int) time(&t));
while (j < 2772)
{
i = rand() % 128;
if ((j + i) > 2772)
break;
j += i;
printf("%c", i);
}
printf("%c\n", (2772 - j));
return (0);
=======

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));
	
	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
			{
				password[index] -= diff_half1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))
			{
				password[index] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
>>>>>>> 673a4e3218d2516b30e6229a0666e0c6bc90f938
}
