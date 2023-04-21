#ifndef HEADERS_H
#define HEADERS_H

/** standard libraries**/

#include <unistd.h>
#include <stdarg.h>

#include <stdio.h>





/**Symbolic Constatnt**/

#define SUPPFORMATS 9 /** how many supported formats !*/





/** Define a new types **/

typedef char * string;






/** Functions Prototypes **/

int printchar(char c);
int get_len(string str);
int printer(string str, ...);
char checkformat(char c);




#endif
