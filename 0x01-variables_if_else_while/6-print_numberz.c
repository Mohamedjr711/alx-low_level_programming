#include <stdio.h>
/**
 *main - A program that prints a line with puts function
 *Description: 'the program's description'
 *parameter: describe the parameter
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar(i + '0');
putchar('\n');
return (0);
}
