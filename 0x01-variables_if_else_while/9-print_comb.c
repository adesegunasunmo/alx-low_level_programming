#include <stdio.h>
/**
 * main - printing numbers from 0-9 with commas and space between them
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: Always 0 (Success)
 */
int main(void)
{
        int a

        for (a = 48; a <= 57; a++)
        {
                putchar(a);
                if (a != 57)
                {
                        putchar(',');
                        putchar(' ');
                }
        }
        putchar('\n');
        return (0);
}
