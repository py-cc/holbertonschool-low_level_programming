#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always 0 (success)
**/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i > j || i == j)
				continue;
			else
			{
				putchar(i + '0');
				putchar(j + '0');
				if (!(i == 8 && j == 9))
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
