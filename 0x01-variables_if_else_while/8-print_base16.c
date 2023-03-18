#include <stdio.h>
/**
* main - prints numbers between 0 to 9 and letters between a to f
*
* Description: using the main function
* this program prints "Programming of numbers  0 to 9 and letters a to f
* Return: 0
*/
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
