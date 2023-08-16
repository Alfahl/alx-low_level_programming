#include "main.h"
/**
 * print_sign-print + if the 
 *
 * @n: takes the you
 *
 * Return: always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
