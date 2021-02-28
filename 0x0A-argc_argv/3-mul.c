#include <stdio.h>
#include "holberton.h"
/**
* _atoi - convert a string to an integer
* @s: pointer to string check
* Return: integer convert
*/
int _atoi(char *s)
{
	unsigned int len, result = 0;
	int signo = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] == 45)
			signo++;
		else if (s[len] >= '0' && s[len] <= '9')
			result = result * 10 + s[len] - 48;
		else if (result > 0)
			break;
		else if (*s == '\0')
			return (0);
	}

	return (signo % 2 == 1 ? result = -result : result);
}
/**
* main - Entry point
* @argc: size of argv
* @argv: size of command arguments
*
* Return: 0 Success
*/
int main(int argc, char *argv[])
{

	if (argc > 1)
	{
		int i, mult = 0;

		for (i = 1; i < argc; i++)
		{
			mult = _atoi(argv[1]) * _atoi(argv[2]);
		}
		printf("%d\n", mult);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}