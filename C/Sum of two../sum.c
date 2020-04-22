#include <stdio.h>

int add(int x, int y)
{
  int i;
  
  i = 0;
  if (x == 0)
    return y;
  else if (y == 0)
    return x;
  else if (x > 0 && y > 0)
    {
      while (x != 0)
	{
	  i++;
	  x--;
	}
      while (y != 0)
	{
	  i++;
	  y--;
	}
    }
  else if (x > 0 &&  y < 0)
    {
      while (x != 0)
	{
	  i++;
	  x--;
	}
      while (y != 0)
	{
	  i--;
	  y++;
	}
    }
  else if (x < 0 &&  y > 0)
    {
      while (x != 0)
	{
	  i--;
	  x++;
	}
      while (y != 0)
	{
	  i++;
	  y--;
	}
    }
  else if (x < 0 &&  y < 0)
    {
      while (x != 0)
	{
	  i--;
	  x++;
	}
      while (y != 0)
	{
	  i--;
	  y++;
	}
    }
  return (i);
  // Do your magic!
}

int main()
{
  printf("%d\n", add(2147483647, -2147483647));
  return (0);
}
