#include <stdio.h>
/**
 * main - lowercase in reverse
 * Return: 0 when success
*/
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
