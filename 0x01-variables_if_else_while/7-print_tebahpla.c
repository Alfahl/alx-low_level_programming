#include <stdio.h>
/**
 * main-entry of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ana;

	for (ana = 'z'; ana >= 'a'; ana--)
	{
		putchar(ana);
	}
	putchar('\n');
	return (0);
}
