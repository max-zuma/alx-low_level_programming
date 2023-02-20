#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Succes)
 *
 */

int main(void)
{
	int ones, tens;

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digits*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones digits*/
		{
			if (ones != tens)/*elimintae repetition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && == '9'))/*adds commas and spaces*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
