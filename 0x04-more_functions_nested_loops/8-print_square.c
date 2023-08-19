#include "main.h"
/**
 * print_square - prints square stuff
 *
 * @size: integer to set square size
 */
void print_square(int size)
{
	int i;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

