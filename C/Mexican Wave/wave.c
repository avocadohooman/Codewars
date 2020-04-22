#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	j++;
      i++;
    }
  return (j);
}

void  wave(char *y, char **target)
{
  int i;
  int j;
  int k;
  int count;

  count = ft_strlen(y);
  printf("Strlen: %d\n", count);
  i = 0;
  printf("wave function, before first while loop\n");
  target = malloc(sizeof(char*) * count);
  while (i < count)
    {
      j = 0;
      k = i;
      target[i] = malloc(sizeof(char) * count + 1);
      while (y[j] != '\0')
	{
	  if (y[j] < 33)
	    {
	      target[i][j] = y[j];
	      j++;
	      k++;
	      continue ;
	    }
	  if (j == k && y[j] > 32)
	    target[i][j] = y[j] - 32;
	  else
	    target[i][j] = y[j];
	  j++;
	}
      target[i][j] = '\0';
      printf("%s\n", target[i]);
      i++;
    }
}

int main()
{
  char *str = " gap ga ga ";
  int i;
  char **target;
  int count = ft_strlen(str);

  i = 0;
  printf("Before calling function\n");
  wave(str, target);
  return (0);
}
