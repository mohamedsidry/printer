#include "headers.h"




/**
* printer - variadic function prints strings until now !
* @str: string to print (base) .
* @...: ellips arguments .
*
* Return: the len of the given string (@str) .
*/



int printer(string str, ...)

{
  int  len;
  int i, j, index;
  char posible_format, format;
  string str_arg;
  len = get_len(str);
  va_list obj_t;
  va_start(obj_t,str);
  for (i = 0 ; i < len ;i++)
    {
      if (str[i] == '%')
	{
	  posible_format= str[i + 1];
	  format = checkformat(posible_format);

	  if (format != '\\')
	    {
	      switch (format)
		{
		  
		case 's':

		  //string
		  
		  str_arg = va_arg(obj_t, string);
		  
		  for (index = 0 ; str_arg[index] != '\0'; index++)
		   {
		      printchar(str_arg[index]);
		   }
		  i++;
		  break;
		  
		case 'i' :
		  // int
		  break;
		  
		case 'd' :
		  // int 
		  break;


		case 'u' :

		  break;
		  
		case 'x' :
		  break;
		  
		case 'p' :
		  break;
		  
		case 'o' :
		  break;
		  
		case 'c' :
		  break;
		  
		}

	    }
	  else
	    {
	     printchar(str[i]); 
	    }
	}
      else
	{
      //c = va_arg(str[i], char);
	  printchar(str[i]);
	}
    }
  va_end(obj_t);
  printchar('\0');

  
  return (len); 
}
