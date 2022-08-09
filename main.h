#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int _switch(char c, va_list arg);
int print_character(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
int print_string(va_list arg);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
int print_rev(va_list arg);
int print_base16_upper_lower(va_list arg, char *representation);
int loop_format(va_list arg, const char *string);
int call_function_manager(char aux, va_list arg);
int check_percent(int *flag, char aux);
int get_flag(char s, flags_t *f);
int (*get_print(char s))(va_list, flags_t *);
char *convert(unsigned long int num, int base, int lowercase);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[], int flags, int width, int precision, int size);
int is_printable(char c);
int append_hexa_code(char ascii_code, char buffer[], int i);
int is_digit(char c);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);
int write_number(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);
int write_num(int ind, char buffer[], int flags, int width, int prec, int length, char padd, char extra_c);
int write_unsgnd(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);
int write_pointer(char buffer[], int ind, int length, int width, int flags, char padd, char extra_c, int padd_start);
#endif
