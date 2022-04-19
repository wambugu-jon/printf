#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* Functions for task one */
int _printf(const char *format, ...);
int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_percentagesign(va_list l, flags_t *f);

/* Functions to deal with numbers */
int print_int(va_list l, flags_t *f);
int count_digit(int i);
int print_unsigned(va_list l, flags_t *f);
void print_number(int n);

/* Functions for custom conversions */
char *convert(unsigned long int num, int base, int lowercase);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int print_hexlower(va_list l, flags_t *f);
int print_hexupper(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_rot13(va_list l, flags_t *f);
int print_S(va_list l, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* get_flag */
int get_flag(char s, flags_t *f);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

#endif
