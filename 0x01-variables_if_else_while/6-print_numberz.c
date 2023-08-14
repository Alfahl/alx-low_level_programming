#include <stdio.h>
/**
 * main-entry of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers + '0');
	}
	{
		putchar('\n');
	}
	return (0);
}
