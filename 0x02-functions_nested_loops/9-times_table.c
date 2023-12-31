#include "main.h"
/**
 * times_table - print the 9 times table
 *
 * example table
 * 0, 0, 0, ..
 * 0, 1, 2, ..
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;
			/*
			 * put space if prduct is singlr nimber
			 * place the first digit if tow numbers
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the first didgt*/
			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
