#ifndef MAIN_H
#define MAIN_H

/** Standard Libraries */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>


/** New Data Types  */

typedef char * string ;



/** Local Functions Prototypes */

int _printf(const char *format, ...);

unsigned int get_len(char const *str);

int _putchar(char c);


#endif
