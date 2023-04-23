#include "main.h"




/**
* _printf - this is my printf function to print string and chars .
*
*
*
*/



int _printf(const char *format, ...)

{
  char char_holder;
  int len;
  unsigned int format_len, str_len, j, i;
  string string_pointer;
  va_list obj_t;

  
  /** get the length of format string to help me loop */
  format_len = get_len(format);

  

  va_start(obj_t, format);

  
  /** loop trough all characters in format string **/

  for (i = 0 ; i < format_len ; i ++)
    {

      /** Check if current character a  % */

      if (format[i] == '%')
	{
	  /** if so check the next character if it is one of supported formats (s or c or %) % after % print just one ! */
	  switch (format[i + 1])
	    {
	    case 's' :
	      
	      string_pointer = va_arg(obj_t,string);
	      str_len = get_len(string_pointer);
	      for (j = 0 ; j < str_len ; j++)
		{
		  char_holder = string_pointer[j];
		  _putchar(char_holder);
		}
	      len += str_len;
	      
	      break;
	      
	    case 'c' :
	      
	      char_holder = va_arg(obj_t,int);
	      
	      _putchar(char_holder);
	      len++;
	      
	      break;
	    

	    case '%' :
	      _putchar('%');
	      len++;
	      
	      break;
	      
	      /** If the char after % is not a supported format just print it !*/
	    default :
	      char_holder = format[i + 1];
	      _putchar(char_holder);
	      len++;
	    }
	  
	  /**added 1 to i here to not print the character after % sign (format) */
	  i++;
	}
      else
	{
	  /** if the character in currect position is not % just print it */
	  char_holder = format[i];
	  _putchar(char_holder);
	  len++;
	}
    }
  

  va_end(obj_t);

  
  /**_putchar('\n');*/

  /** return the number of printed characters !*/
  return (len);
}
