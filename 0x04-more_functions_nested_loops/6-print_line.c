#include "main.h"
/**
 *-print_line - draws a straight line in the terminal
 *@input
 *return /n if n is 0 or less
 */
void print_line(int n);
{
in x;
if (n > 0)
{
for (x = 1, x <= n; x++)
{
_putchar(95);
}
}
_putchar('\n');
}
