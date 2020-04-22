#include <stdbool.h>

bool is_uppercase(const char *source);

int	is_uppercase(const char *source)
{
  int i;

  i = 0;
  while (source[i] != '\0')
  {
    if (source[i] >= 97 && source[i] <= 122)
      return (0);
  }
  return (1);
}
