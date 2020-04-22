#include <stdio.h>

int nbYear(int p0, double percent, int aug, int p) {
  int y;
  
  y = 0;
  while (p0 < p)
    {
      p0 = p0 + (p0 * (percent / 100)) + aug;
      y++;
    }
  return (y);
}

int main ()
{

  printf("%d\n", nbYear(1500, 5, 100, 5000));
  return (0);
}
