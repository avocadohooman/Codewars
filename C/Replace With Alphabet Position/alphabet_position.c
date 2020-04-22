#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int	ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
      i++;
  return (i);
}

int check_let(char *text)
{
  int i;
  int l;

  i = 0;
  l = 0;
  while (text[i] != '\0')
  {
    if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
      l++;
    i++;
  }   
  return (l);
}
char 	*alphabet_position(char *text) {
  char *str;
  int i;
  int let;

  i = 0;
  let = ft_strlen(text);
  if (let == 0)
    return (strdup(""));
  printf("%d\n%d\n", let, check_let(text));
  if (check_let(text) == 0)
    return(strdup(""));
  str = malloc(sizeof(char) * ((let + (let - 1) + 1)));
  if (str == NULL)
    return NULL;
  while (i < let)
  {
    if (text[i] >= 'a' && text[i] <= 'z')
        sprintf(str, "%s%d ", str, text[i] - 96);
    else if (text[i] >= 'A' &&  text[i] <= 'Z')
        sprintf(str, "%s%d ", str, text[i] - 64);
    i++;
  }
  let = ft_strlen(str);
  str[let - 1] = 0;
  return (str);
}

int main()
{
  char *str = "[ABC]...[DEF]...^GHI^...1234";
 
  printf("%s\n", alphabet_position(str));
  //printf("20 8 5 14 1 18 23 8 1 12 2 1 3 15 14 19 1 20 13 9 4 14 9 7 8 20\n");
  return (0);
}
