#ifndef MAIN_H
#define MAIN_H



int _printf(const char *format, ...);
int _putchar(char c);

/* Handling char, ctring and percentage*/
int print_str(va_list args);
int print_char(va_list args);
int print_per(int p);
