#include <stdio.h>
/**
 *main - A program that prints a line with puts function
 *Description: 'the program's description'
 *parameter: describe the parameter
 *Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');
return (0);
}
