#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 * 
 * Return: if character is lowercase, otherwise 0
 */

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
