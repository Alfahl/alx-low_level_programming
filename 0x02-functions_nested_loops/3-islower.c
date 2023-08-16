#include "main.h"
/**
 * _islower-fumction that i have made tod
 *
 *@c: check input
 *
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
