#include "main.h"

/**
 * print_char - function to print a character
 * @l: va_list for function
 * @f: pointer to structure flags
 * Return: the number of characters printed
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}

/**
 * print_string - function to print a string
 * @l: va_list for function
 * @f: pointer to structure flags
 * Return: the number of characters printed
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_percentagesign - function to print a percent
 * @l: va_list for functio
 * @f: pointer to structure flags
 * Return: the number of characters printed
 */
int print_percentagesign(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
