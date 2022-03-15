#include <unistd.h>
#include "main.h"
/**
 * print_sign- checks for lowercase character
 * @n: An input number
 * Description: No using inbult functions
 * Return: 1 if n is greater than 0
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
