#include "main.h"





int main(void)
{


  int len;
  
  /** You can add more arguments to @_printf function */
  
  len = _printf("Hello,%s\nTHis is my printf function in %c programing language \nNever forget to init i to %c when you working with while loop. \nI can print %% too , can you ?\nOh look %%k char after %% is not a supported format i will just print it (%k)%c\n","World",'C', '0','!');
  printf("%d\n",len);
  return (0);
}
