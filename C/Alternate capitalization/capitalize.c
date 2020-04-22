#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *strin)
{
  int i;

  i = 0;
  while (strin[i] != '\0')
    i++;
  return(i);
}

char** capitalize(char* strin) {
  char **answer;
  int i;
  int j;
  int len;

  i = 0;
  len = ft_strlen(strin);
  answer = malloc(sizeof(char*) * 2);
  while (i < 2)
    {
      answer[i] = malloc(sizeof(char) * len + 1);
      j = 0;
      if (i == 0)
	{
	  while (strin[j] != '\0')
	    {
	      if (j % 2 != 0)
		answer[i][j] = strin[j];
	      else
		answer[i][j] = strin[j] - 32;
	      j++;
	    }
          answer[i][j] = '\0';
          i++;
	}
      else
	{
	  while (strin[j] != '\0')
	    {
	      if (j % 2 == 0)
		answer[i][j] = strin[j];
	      else 
		answer[i][j] = strin[j] - 32;
	      j++;
	    }
	  answer[i][j] = '\0';
	  i++;
	}
    }
  return (answer);
}


int main ()
{
  char *str = "abracadabra";
  char **answers;

  answers = capitalize(str);
  printf("AbRaCaDaBrA\n");
  printf("%s\n", answers[0]);
  printf("aBrAcAdAbRa\n");
  printf("%s\n", answers[1]);
  return(0);
}
