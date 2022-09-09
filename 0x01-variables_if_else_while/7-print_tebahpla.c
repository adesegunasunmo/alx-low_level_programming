#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
char segun;

for (segun = 'z'; segun >= 'a'; segun--)
	putchar(segun);
putchar('\n');
return (0);
}
