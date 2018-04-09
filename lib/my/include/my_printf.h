/*
** EPITECH PROJECT, 2017
** my_printf.h
** File description:
** Include of my_printf
*/

#ifndef MY_PRINTF_
#define MY_PRINTF_

#include <stdarg.h>

int is_pourcent(va_list, char *, int);
int is_unprintable(va_list, char *, int);
int is_binary(va_list, char *, int);
int is_ptr(va_list, char *, int);
int is_str(va_list, char *, int);
int is_char(va_list, char *, int);
int is_unsigned_int(va_list, char *, int);
int is_int(va_list, char *, int);
int function_gestion(va_list, char *, int);
int my_printf(char *, ...);
int is_redirected(va_list, int, char *, int);
void is_unprintable2(int, char*, int);

#endif
