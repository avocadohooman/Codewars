#include <stdlib.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
  int i;
  int len;
  char tmp;

  len = 0;
  while (str[len] != '\0')
    {
      len++;
    }
  len = len - 1;
  i = 0;
  while (str[i] != '\0' && i < len)
    {
      tmp = str[len];
      str[len] = str[i];
      str[i] = tmp;
      len--;
      i++;
    }
  return(str);
}

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int count_digit(int n)
{
    int count;

    count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    return (count);
}

char* group_by_commas(int n) 
{
    char *str;
    int len = count_digit(n);
    int tmp;
    int i = 0;

    printf("%d\n", len);
    str = malloc(sizeof(char) * len + 100);
    if (str == NULL)
      return (NULL);    
    while (i < len)
    {
        tmp = n;
        tmp = tmp % 10;
        if (i % 3 == 0)
            sprintf(str, "%s,%d", str, tmp);
        else
            sprintf(str, "%s%d", str, tmp);
        n = n / 10;
        i++;  
    }
    ft_strrev(str);
    len = ft_strlen(str);
    str[len - 1] = '\0';
    return (str);
}

int main()
{
    int n = 1251000000;

    printf("%s\n", group_by_commas(n));
    return (0);
}