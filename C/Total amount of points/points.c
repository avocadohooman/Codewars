#include <stdio.h>

int points(char* games) 
{  
  int i;
  int j;
  int res;
   
  i = 0;
  j = 0;
  res = 0;
  while (i < 10)
    {
      if (games[j] > games[j + 2])
	res = res + 3;
      else if (games[j] == games[j + 2])
	res = res + 1;
      i++;
      j++;
      j++;
      j++;
    }
  return (res);
}

int main()
{
  char* games[10] = {"1:0","2:0","3:0","4:0","2:1","3:1","4:1","3:2","4:2","4:3"};

  printf("%d\n", points(games));
  return(0);
}
