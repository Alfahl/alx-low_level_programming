#include "main.h"
/**
 * _isalpha-check if the 
 *
 * @c: take the 
 *
 * Return: 1 is c if the 
 */
int _isalpha(int c)
{
	if (c >= 97 && c<= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
