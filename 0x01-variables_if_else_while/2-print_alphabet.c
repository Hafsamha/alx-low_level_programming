#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char d;

	d = 'a';
	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
