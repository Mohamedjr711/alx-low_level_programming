#include "main.h"
/**
 *print_alphabet_x10 - A program that prints a line with puts function
 *Description: 'the program's description'
 *parameter: describe the parameter
 */
void print_alphabet_x10(void)
{
	int i;
	char j;
for (j = 1; i <= 10; i++)
{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
}
}
