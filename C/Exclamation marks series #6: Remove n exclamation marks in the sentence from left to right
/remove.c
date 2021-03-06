#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *strin)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (strin[i] != '\0')
    {
      if (strin[i] != '!')
	j++;
      i++;
    }
  return (j);
}

char* ft_remove(const char *strin, int n)
{
  int i;
  int j;
  int len;
  char *clean;
  
  len = ft_strlen(strin);
  clean = malloc(sizeof(char) * len + 1);
  i = 0;
  j = 0;
  while (strin[i] != '\0'  && i < n)
    {
      if (strin[i] != '!')
	{
	  clean[j] = strin[i];
	  j++;
	}
      i++;
    }
  clean[j] = '\0';
  return (clean);
}

int main()
{
  const char* strin = "!!!Hi !!hi!!! !hi";

  printf("%s\n", ft_remove(strin, 10));
  return (0);
}
