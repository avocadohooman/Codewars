#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *src)
{
  int i;
  
  i = 0;
  while (src[i] != '\0')
    i++;
  return (i);
}

char *repeat_str(size_t count, const char *src) {
  int i;
  int j;
  int c;
  char *dst;
  int len;
  
  len = ft_strlen(src) * count;
  printf("%d\n", len);
  dst = malloc(sizeof(char) * len + 1);
  j = 0;
  c = 0;
  while (j < count)
    {  
      i = 0;
      while (src[i] != '\0')
	{
	  dst[c] = src[i];
	  i++;
	  c++;
	}
      j++;
    }
  dst[c] = '\0';
  return (dst);
}

int main()
{
  const char *src = "Hello ";
  size_t count = 4;
  printf("%s\n", repeat_str(count, src));
  return (0);
}
