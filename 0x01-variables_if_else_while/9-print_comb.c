#include <stdio.h>
/**
 * main - prints all combinations of single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)

		putchair(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

		putchar('\n');

		return (0);
}
