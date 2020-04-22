#include <stdlib.h>
#include <stdio.h>

const char* number_to_string(int number) {

  const char str[100];
  
  sprintf(str, "%d", number);
  printf("%s\n", str);
  return (str);
}

int main()
{
  printf("%s\n", number_to_string(123));
  return(0);
}
