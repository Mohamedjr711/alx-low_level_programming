#include <stdio.h>
/**
 *main - A program that prints a line with puts function
 *Description: 'the program's description'
 *parameter: describe the parameter
 *Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of int: %lu byte(s)", sizeof(int));
printf("Size of long int: %lu byte(s)", sizeof(long int));
printf("Size of long long int: %lu byte(s)", sizeof(long long int));
printf("Size of float: %lu byte(s)", sizeof(float));
return (0);
}
