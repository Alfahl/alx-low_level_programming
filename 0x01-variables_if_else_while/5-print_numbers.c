#include <stdio.h>
/**
 * main-entry of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ana;

	for (ana = 0; ana <= 9; ana++)
	{
		printf("%d", ana);
	}
	putchar('\n');
	return (0);
}
