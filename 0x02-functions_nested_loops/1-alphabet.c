#include "main.h"

/**
* print-alphabet - function that prints the alphabet in lowercase
*
*Return: Always 0
*/

int print_alpphabet(void)
{
int i;

for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}
