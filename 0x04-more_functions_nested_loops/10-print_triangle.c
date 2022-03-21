#include "main.h"

/**
 * print_triangle - function that prints triangle
 * @size: print size
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
int i;
int j;
int k;
int l;
if (size > 0)
{
k = size - 1;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j--)
{
_putchar (' ');
}
for (l = 0; l < size; l++)
{
_putchar (35);
}
k--;
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}

