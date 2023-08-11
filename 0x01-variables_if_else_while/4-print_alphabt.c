#include <stdio.h>
/**
 * main - lower case except q and e
 * Return: 0 when success
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
