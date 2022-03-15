#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print alphabets  followed by new line
 * Description: No using inbult functions
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n')
}
