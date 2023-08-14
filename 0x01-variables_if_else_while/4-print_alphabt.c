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
		if (ana != 'q' && ana != 'e')
		{
		putchar(ana);
		}
	}
	putchar('\n');
	return (0);
}
