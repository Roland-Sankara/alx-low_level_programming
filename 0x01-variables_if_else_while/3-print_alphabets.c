#include <stdio.h>

/**
  * main - prints aplhabet in lowercase
  * Description: Prints the alphabet in lowercase
  * Return: 0 exit code
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
