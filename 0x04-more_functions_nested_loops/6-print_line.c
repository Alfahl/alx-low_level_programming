#include "main.h"
/**
 * print_line - drows thet
 * @n: input
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putcahr('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
