




/**
* get_len - count the length of string .
*
*
* Return: length of input string .
*/



unsigned int get_len(char const *str)
{
  int i = 0;

  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
