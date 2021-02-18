#include "holberton.h"
/**
* _strncpy - function that copies a string
* @dest: string with declared buffer to copies
* @src: string to copies
* @n: amount of bytes to copies
*
* Return: a pointer to string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		if (j < i)
		{
			dest[j] = src[j];
		}
		else
		{
			dest[j] = '\0';
		}
	}
	return (dest);
}
