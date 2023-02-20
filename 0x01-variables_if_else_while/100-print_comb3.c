#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Succes)
 *
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= 0; tens++)/* prints tens digits*/
	{
		for (ones = '0'; ones <= '0'; ones++)/* prints ones digits*/
		{
			if (!((ones == tens) || (tens  ones)))/*elimintae repetition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && == '0'))/*adds commas and spaces*/
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
