#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char ch, e, q;

	ch = 'a';
	e = 'e';
	q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != e && ch != q)
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
