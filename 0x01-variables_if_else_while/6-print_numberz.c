#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
