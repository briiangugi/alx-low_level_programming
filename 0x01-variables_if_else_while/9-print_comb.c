#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	for (a = 0; a < 10; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
