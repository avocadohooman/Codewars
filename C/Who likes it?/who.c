#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(const char *const str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

char* likes(size_t n, const char *const names[n])
{

  char *msg;
  int len;


  if (n == 1)
    {
      len = ft_strlen(names[0]);
      printf("%d\n", len);
      msg = malloc(sizeof(char) * len + 12);
      sprintf(msg, "%s likes this", names[0]);
      return (msg);
    }
  else if (n == 2)
    {
      len = ft_strlen(names[0]) + ft_strlen(names[1]);
      printf("%d\n", len);
      msg = malloc(sizeof(char) * len + 16);
      sprintf(msg, "%s and %s like this", names[0], names[1]);
      return (msg);
    }
  else if (n == 3)
    {
      len = ft_strlen(names[0]) + ft_strlen(names[1]) + ft_strlen(names[2]);
      printf("%d\n", len);
      msg = malloc(sizeof(char) * len + 18);
      sprintf(msg, "%s, %s and %s like this", names[0], names[1], names[2]);
      return (msg);
    }
  else if (n > 3)
    {
      len = ft_strlen(names[0]) + ft_strlen(names[1]);
      printf("%d\n", len);
      msg = malloc(sizeof(char) * len + 26);
      n = n - 2;
      sprintf(msg, "%s, %s and %zu others like this", names[0], names[1], n);
      return (msg);
    }
  else
    return ("no one likes this");
}


int main()
{
  const char *const names[0] = {};
  const char *const names1[1] = {"Peter"};
  const char *const names2[2] = {"Peter", "Niklas"};
  const char *const names3[3] = {"Peter", "Niklas", "dsakdDDd0000222DSda+ä+ädsdasDDDD232332dsamdlsamdlkm2dsadsaasda"};
  const char *const names4[4] = {"Peter", "xdasldYe222124321312321dsa", "Gerhard", "Niklas"};
  const char *const names5[5] = {"Peter", "xdasldYe222124321312321dsa", "Gerhard", "Niklas", "dsklajdklasjdklasjdldksadjalksd!"};

  printf("%s\n", likes(0, names));
  printf("%s\n", likes(1, names1));
  printf("%s\n", likes(2, names2));
  printf("%s\n", likes(3, names3));
  printf("%s\n", likes(4, names4));
  printf("%s\n", likes(5, names5));
  return (0);
}
