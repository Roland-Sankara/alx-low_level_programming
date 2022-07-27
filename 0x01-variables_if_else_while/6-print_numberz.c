#include <stdio.h>

/**
  * main - prints single numbers from 0
  * Description: Prints single digit numbers from 0
  * Return: 0 exit code
  */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
