#include <stdlib.h>
#include <stdio.h>

int ft_strlen_no_space(char*strin)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (strin[i] != '\0')
    {
      if (strin[i] > 32)
	j++;
      i++;
    }
  return (j);
}

char *no_space(char *strin) {

  int i;
  int j;
  char *no_space;
  int len;
  
  len =ft_strlen_no_space(strin);
  no_space = malloc(sizeof(char) * (len + 1));
  i = 0;
  j = 0;
  if (no_space == NULL)
    return (0);
  while(strin[i] != '\0')
    {
      if(strin[i] < 33)
        i++;
      else if (strin[i] > 32)
        {
          no_space[j] = strin[i];
          i++;
          j++;
        }
    }
  no_space[j] = '\0';
  return (no_space);
}

int main()
{
  char *strin = "                          ";

  printf("%s\n", no_space(strin));
  return(0);
}
