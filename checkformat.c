#include "headers.h"



/**
* checkformat - check if char after % is a supported format .
* @c: char as an arg (format) .
* Return: char if suppoted format and ('\') if it is not .
* Description : SUPPFORMATS is a Symbolic constant define the number of suuported formats (this case 9 .) . 
*/



char checkformat(char c)
{
  int i;
  char formats[] = {'i', 'd', 'u', 'o', 'x', 'X', 'c', 's', 'p'};
  
  for (i = 0 ; i < SUPPFORMATS ; i++)
    {
      if (c == formats[i])
	{
	  return formats[i];
	}
    }
  return ('\\');
}
