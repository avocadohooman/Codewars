#include <stdio.h>
#include <stdlib.h>

int ft_strlen_clean(const char *str)
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

char *clean_str(const char *str, char *clean)
{
  int len;
  int i;
  int j;
  
  i = 0;
  j = 0;
  len = ft_strlen_clean(str);
  printf("%d\n", len);
  clean = malloc(sizeof(char) * len + 1);
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  clean[j] = str[i];
	  j++;
	}
      i++;
    }
  clean[j] = '\0';
  return (clean);
}

char *reverse_letter(const char *str)
{
  char *clean;
  int i;
  int len;
  char c;
  
  clean = clean_str(str, clean);
  printf("%s\n", clean);
  len = 0;
  while (clean[len] != '\0')
    len++;
  len = len - 1;
  printf("%d\n", len);
  i = 0;
  while (i < len && clean != '\0')
    {
      c = clean[len];
      clean[len] = clean[i];
      clean[i] = c;
      len--;
      i++;
    }
  return (clean);
}


int main()
{
  const char *str = "ultr53o?n";

  printf("%s\n", reverse_letter(str));
  return (0);
}
