#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int sum = 1, num = 0;
	long int temp;
	int i = 1;

	while (num <= 4000000)
	{
			temp = sum;
			sum = sum + num;
			if (sum % 2 == 0)
			{
				printf("%ld", sum);
				if (!(sum > 3000000))
				{
					printf(",");
					printf(" ");
				}
			}
			num = temp;
			i++;
	}
	printf("\n");
	return (0);
}
