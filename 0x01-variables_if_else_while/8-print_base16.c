#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
int s;
char b;
for (s = 48; s < 58; s++)
	putchar(s);
for (b = 'a'; b <= 'f'; b++)
	putchar(b);
putchar('\n');
return (0);
}
