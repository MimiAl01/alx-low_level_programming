#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int p, d;
for (p = '0'; p < '8'; p++)
{
for (d = p + 1; d <= '9'; d++)
{
putchar(p);
putchar(d);
if (p != '8' || d != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
