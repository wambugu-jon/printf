#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 *print_str - a function that prints out a string
 *@args: a list of all the arguments that the function will take
 *Return: The number of characters
 */
int print_str(va_list args)
{
	char *j;
	int i, chars;

	chars = 0;
	j = va_arg(args, char *);
	if (j == NULL)
		j = "(null)";
	i = 0;
	while (j[i] != '\0')
	{
		_putchar(j[i]);
		i++;
		chars++;
	}
	return (chars);
}
/**
 *print_char - a funciton that prints out a character
 *@args: a variable that takes in a varrying amount of function arguments
 *Return: Zero is returned
 */
int print_char(va_list args)
{
	char j;

	j = va_arg(args, int);
	_putchar(j);
	return (1);
}
/**
 *print_per - a function that accounts for %% as an input
 *@p: A parameter that stores a % and prints it
 *Return: Return the % character
 */
int print_per(int p)
{
	p = '%';
	_putchar(p);
	return (1);
}
