#include <stdio.h>

/**
  * main - main function block
  * Description: Prints single digit numbers by the help of ASCII code
  * ACII code 48 and 57 are for 0 and 9 respectively.
  * Return: 0 exit code
  */
int main(void)
{
	int ascii_code;

	for (ascii_code = 48; ascii_code < 58; ascii_code++)
	{
		putchar(ascii_code);
		if (ascii_code != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
