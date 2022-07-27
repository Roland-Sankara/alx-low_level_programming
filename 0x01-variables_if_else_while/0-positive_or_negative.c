#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main  - prints negative or positive given value of n
 * Description: Function uses if and else to determine if the value of n is negative or positive
 * Return: 0 exit code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return  (0);
}

