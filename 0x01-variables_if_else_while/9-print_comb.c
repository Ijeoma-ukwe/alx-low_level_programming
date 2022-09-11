#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
char ch;

for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
}
}
putchar('\n');
return (0);
}
