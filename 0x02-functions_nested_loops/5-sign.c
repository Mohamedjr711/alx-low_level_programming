#include "main.h"
/**
 *_islower - A program that prints a line with puts function
 *lowercase character . another cases , shows 
 * 0
 *parameter: describe the parameter
 *Return: 1 for lowercases character. 0 for the rest
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
{
	_putchar(45);
	return (-1);
}
else 
{
	 _putchar(48);
	 return (0);
}
 _putchar('\n');
 }
