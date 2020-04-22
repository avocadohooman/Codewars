#include <stdio.h>

int getAge(const char *inputString)
{
  char n = '0';
  int i;
  
  i = 0;
  while (n != inputString[0])
    {
      n++;
      i++;
    }
  return (i);
}

int main()
{
  const char *inputString = "5 years old";
  printf("%d\n", getAge(inputString));
  return (0);
}
