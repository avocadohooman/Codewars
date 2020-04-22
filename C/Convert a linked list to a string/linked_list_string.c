#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

int   ft_list_size(Node *list)
{
  int i;
  Node *tmp;
  
  tmp = list;
  i = 0;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
    i++;
  }
  return (i);
}

char *stringify(Node *list) {

  char *str;
  Node *tmp;
  int len;
  
  len = ft_list_size(list);
  str = calloc(10000, sizeof(char));
  while (tmp->next != NULL)
  {
    sprintf(str, "%s%d -> ",str, tmp->data - 48);
    tmp = tmp->next;
  }
return (str);
}

