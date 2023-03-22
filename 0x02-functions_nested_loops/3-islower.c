#include "main.h"
/**
 *_islower - A program that prints a line with puts function
 *lowercase character . another cases , shows 
 * 0
 *parameter: describe the parameter
 *Return: 1 for lowercases character. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
