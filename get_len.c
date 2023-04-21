#include "headers.h"




/**
* get_len - function to count the len of string .
* @str: pointer to char .
*
* Return: the length of the string .
*/


int get_len(string str)
{
  int i;

  while (str[i] != '\0')
    {
      i++;
    }

  return (i);
}
