#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char am;
for (am = 'a' ; am <= 'z' ; am++)
{
	putchar(am);
}
for (am = 'A' ; am <= 'Z' ; am++)
{
	putchar(am);
}
putchar('\n');
return (0);
}
