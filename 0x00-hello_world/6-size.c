#include <stdio.h>
/**
 *
 * main - prints the sizes of the datatypes
 * Return: always zero
 */
int main(void)
{
	printf("Size of a char: %s byte(s)", sizeof(char));
	printf("Size of an int: %s byte(s)", sizeof(int));
	printf("Size of a long int: %s byte(s)", sizeof(long));
	printf("Size of a float: %s byte(s)", sizeof(float));
	return 0;
}
