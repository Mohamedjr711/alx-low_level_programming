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
char j;
for (i = 0; i < 10; i++)
putchar(i + '0');
for (j = 'a'; j <= 'f'; j++)
putchar(j);
putchar('\n');
return (0);
}
