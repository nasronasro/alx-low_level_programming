#include "stdio.h"

/**
 * main - alphabet.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int c = 97;
	int i; 
	for (i = 0; i < 25; i++)
	{
		putchar(c);
	}	
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
