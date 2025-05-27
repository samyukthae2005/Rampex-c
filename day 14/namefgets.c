#include<stdio.h>
int main()
{
  char name[100];
  printf("enter full name:");
  fgets(name,100,stdin);
  printf("%s",name);
}