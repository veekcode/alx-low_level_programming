#include "main.h"
/**
 *-print_ triangle - prints a tiangle using #
 *@input
 *return 0
 */
void print_triangle(int size);
{
	int x, y;
	if (size > 0)
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y <= size-x)
				{
					_putchar(' ');
				}
				else
				{
					_puttchar('#');
				}
			}
		}
		else
		{
			_putchar('\n');
		}
{
