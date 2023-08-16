#include "main.h"
/**
 * print_last-digit-function that print the last digit
 *
 * @n: take a number
 *
 * Retuen: lastdigit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
			_putchar(lastDigit + '0');
	return (0);
}
