#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that prints the numbers
 * from 0 to 9 followed by a new line
 * Return: Always 0
 */
void print_numbers(void)
{
int x;

for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
_putchar('\n');
}

