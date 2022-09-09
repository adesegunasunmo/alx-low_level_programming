#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
char seg;

for (seg = 'a'; seg <= 'z'; seg++)
{
	putchar(seg);
}
putchar('\n');
return (0);
}
