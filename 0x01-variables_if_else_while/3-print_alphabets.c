#include <stdio.h>

/**
 *main - entry point
 *
 * Return Always 0 (Success)
 *
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar (lowercase);
lowercase++;
}
while (uppercase <= 'z')
{
putchar (uppercase);
uppercase++;
}

putchar('\n');
return (0);

}
