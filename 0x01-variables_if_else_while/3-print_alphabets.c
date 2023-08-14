#include <stdio.h>
/**
 * main-entry of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ana;

	for (ana = 'a'; ana <= 'z'; ana++)
	{
		putchar(ana);
	}
	for (ana = 'A'; ana <= 'Z'; ana++)
	{
		putchar(ana);
	}
	{
		putchar('\n');
	}
	return (0);
}
