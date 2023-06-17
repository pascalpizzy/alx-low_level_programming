#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z; ch++)
	{
		putchar("%c ", c);
	}

	for(ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar("%c ", c);
	}
	putchar('\n');
	return (0);
}
