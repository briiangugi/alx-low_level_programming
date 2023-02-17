#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	char let;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (let = 'a'; let <= 'f'; let++)
		putchar(let);

	putchar('\n');

	return (0);
}
