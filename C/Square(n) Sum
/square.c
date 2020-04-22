#include <stddef.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
  if (power == 0)
    return (0);
  else if (power == 1)
    return (nb);
  else
    return (nb * ft_recursive_power(nb, power - 1));
}

int square_sum(const int *values, size_t count)
{
  int i;
  int res;
  
  i = 0;
  res = 0;
  while (i < count)
    {
      res = res + ft_recursive_power(values[i], 2);
      i++;
    }
  return (res);
}

int main ()
{
  int values[] = {1, 2};

  printf("%d \n", square_sum(values, 2));
  return (0);
}
