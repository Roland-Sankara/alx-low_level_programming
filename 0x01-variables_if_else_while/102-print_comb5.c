#include <stdio.h>

/**
  * main - main function block
  * Description: Prints all possible combinations of 2 digit numbers
  * Return: 0 exit code
  */
int main(void)
{
	int num;
	int count;

	for (num = 0; num <= 98; num++)
	{
		for (count = num; count <= 99; count++)
		{
			if (count != num)
			{
				putchar(num / 10 + 48);
				putchar(num % 10 + 48);
				putchar(' ');
				putchar(count / 10 + 48);
				putchar(count % 10 + 48);
				if (num != 98)
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
