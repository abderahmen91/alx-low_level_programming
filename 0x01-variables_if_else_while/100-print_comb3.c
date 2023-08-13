#include <stdio.h>
/**
 * main - Print all combinations of two digits numbers
 *
 * Return: 0 when  Success
 */
int main(void)
{
int dig1, dig2;
for (dig1 = 0; dig1 < 8; dig1++)
{
for (dig2 = dig1 + 1; dig2 < 9; dig2++)
{
putchar('0' + dig1);
putchar('0' + dig2);

if (dig1 < 8)
	putchar(',');
	putchar(' ');

}
}
return (0);
}
