#include "main.h"
#include<stdio.h>
/**
 * main - entry point of the program
 * _putchar - writes the character c to stdout
 * Return: on success 1
 *         on error, -1 is returned, and errno is set appropriately
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{	_putchar(s[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
