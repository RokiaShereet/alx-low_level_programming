#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != e && c != q)
			putchar(c);
	}
	putchar('\n');
		return (0);
}
