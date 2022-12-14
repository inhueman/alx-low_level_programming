/**
 * main: prints the size of various types on the computer it is run on
 * Return: 0 if exited properly, non-zero otherwise
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of an char: %d byte(s)\n", sizeof(char));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	return (0);
}
