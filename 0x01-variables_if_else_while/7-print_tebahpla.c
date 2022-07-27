#include <stdio.h>

/**
  * main - prints aplhabet in reverse lowercase
  * Description: Prints the alphabet in reverse lowercase
  * Return: 0 exit code
  */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
