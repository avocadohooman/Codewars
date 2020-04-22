#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void fakeBin(const char *digits, char *buffer) {
  // Please place result in the memory pointed to by
  // the buffer parameter. Buffer has enough memory to
  // accommodate the answer as well as the null-terminating
  // character.
  int i;
   
  i = 0;
  while (digits[i] != '\0')
    {
      if (digits[i] >= '0' && digits[i] <= '4' )
        buffer[i] = '0';
      else 
        buffer[i] = '1';
      i++;
    }
  buffer[i] = '\0';
}

int main()
{
  const char *digits = "509321967506747";
  char *buffer = (char*)malloc(sizeof(char) * (1 + strlen(digits)));

  fakeBin(digits, buffer);
  printf("%s\n", buffer);
  printf("101000111101101\n");
  return (0);
}
