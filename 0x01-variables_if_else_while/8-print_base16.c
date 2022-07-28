#include <stdio.h>

/**
  * main - prints hexadecimal symbols in lowercase
  * Description: Prints hexadecimal symbols in lowercase
  * Return: 0 exit code
  */
int main(void)
{
	char digit;
	char ch;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
