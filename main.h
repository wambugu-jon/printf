#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

/* Handling char, ctring and percentage*/
int print_str(va_list args);
int print_char(va_list args);
int print_per(int p);
