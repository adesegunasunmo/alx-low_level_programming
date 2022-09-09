#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
int segun;
char maker;

for (segun = 48; segun < 58; segun++)
	putchar(segun);
for (maker = 'a'; maker <= 'b'; maker++)
	putchar(maker);
putchar('\n');
return (0);
}
