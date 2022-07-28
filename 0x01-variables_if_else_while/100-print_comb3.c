#include <stdio.h>

/**
  * main - main function block
  * Description: Prints all possible combinations of two digits
  * ACII codes used are 48 and 57 are for 0 and 9 respectively.
  * Return: 0 exit code
  */
int main(void)
{
	int ascii_code;
	int n;

	for (ascii_code = 48; ascii_code < 57; ascii_code++)
	{
		for (n = (ascii_code + 1); n <= 57; n++)
		{
			putchar(ascii_code);
			putchar(n);
			if ((ascii_code + n) != 113)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
