#include <stdio.h>

/**
  * main - main function block
  * Description: Prints all possible combinations of three digits
  * ACII codes used are 48 and 57 are for 0 and 9 respectively.
  * Return: 0 exit code
  */
int main(void)
{
	int ascii_code;
	int n;
	int c;

	for (ascii_code = 48; ascii_code <= 55; ascii_code++)
	{
		for (n = (ascii_code + 1); n <= 56; n++)
		{
			for (c = (n + 1); c <= 57; c++)
			{
				putchar(ascii_code);
				putchar(n);
				putchar(c);
				if ((ascii_code + n + c) != 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
