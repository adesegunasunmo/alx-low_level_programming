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
char seg;
for (seg = 'a' ; seg <= 'z' ; seg++)
{
if (seg != 'e' && seg != 'q')
{
	putchar(seg);
}
}
putchar('\n');
return (0);
}
