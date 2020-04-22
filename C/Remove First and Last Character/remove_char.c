#include <stdio.h>
#include <stdlib.h>

 int ft_strlen(const char *src)
{
  int i;
  
  i = 0;
  while (src[i] != '\0')
    i++;
  return(i);
}

char *remove_char(char* dst, const char* src)
{
  int i;
  int j;
  int len;
  
  i = 1;
  j = 0;
  len = ft_strlen(src);
  len = len - 1;
  while (i < len)
  {
     dst[j] = src[i];
     j++;
     i++;
     printf("%s\n", dst);
  }
  dst[j] = '\0';
  return (dst);
}


int main()
{
  const char *src= "CountrYY";
  char *dst;

  dst = malloc(sizeof(char) * 1000000);
  printf("%s\n", dst);
  printf("%s\n", src);
  remove_char(dst, src);
  printf(" String copied to dst: %s\n", dst);
  return(0);
}
