#include "main.h"

/**
 * main - Entries
 * should be followed by a new line
 * The programme should return 0
 * Return: always 0
 *
 */
int main(void)
{
	char ann[] = "_putchar";

	int c;
	
	for (c = 0; c <= 8; c++)
	{
		_putchar(ann[c]);
	}
	_putchar('\n');
	return (0);
}
