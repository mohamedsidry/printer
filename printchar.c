#include "headers.h"



/**
* printchar - prints a single character .
* @c: char to print .
* Return: number of printed bytes if printing successed (1). 
* return -1 on error .
*
*/

int printchar(char c)
{
  return (write(1, &c, 1));
}
