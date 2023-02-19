#include <stdio.h>
/**
 *   main - entry point
 *
 *   Return: Always 0 (Success)
 */

int main(void)
{
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("size of an int: %zu byte(s)\n", sizeof(int));
    printf("size of a long: %zu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
    printf("size of a float: %zu byte(s)\n", sizeof(float));

    return (0);
}

