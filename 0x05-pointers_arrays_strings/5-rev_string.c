#include "main.h"

/**
 * rev_string - prints reverse characters.
 * @s: validates the character
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0, c = 0, Aux;


	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > c)
	{
		Aux = s[i];
		s[i--] = s[c];
		s[c++] = Aux;
	}
}
