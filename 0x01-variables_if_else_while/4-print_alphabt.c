#include <stdio.h>

/**
  * main - prints aplhabet in lowercase excpet q and e
  * Description: Prints the alphabet in lowercase but q and e
  * Return: 0 exit code
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
