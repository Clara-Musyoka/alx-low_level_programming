#include <unistd.h>
#include "main.h"
/**
 * main - printing _putchar followed by new line
 * Description: No using inbult functions
 * Return: 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
