#include <stdio.h>

char findMissingLetter(char array[], int arrayLength)
{
  int i;
  char missing;
  
  i = 0;
  printf("%c\n", array[i + 1]);
  while (i < arrayLength)
    {
      if (array[i] + 1 != array[i + 1])
	{
	  missing = array[i] + 1;
	  return (missing);
	}
      i++;
    }
  return (missing);
}

int main()
{
  char arr1[] = { 'a','b','c','d','f' };

  printf("%c\n", findMissingLetter(arr1, 5));
  return (0);
}
