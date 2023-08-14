#include <stdio.h>
/**
 * main-entry of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
