#include <stdio.h>


/**
 * main = prints its name,follow by a new line.
 * @argc:number of command line arguements.
 * @argv: array that contains the program command line arguements.
 * reture: 0 - success.
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	print("%s\n", argv[0]);
	return (0);
}
