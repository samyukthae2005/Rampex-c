#include<stdio.h>
int main()
{
    int a;
    printf("enter a:");
    scanf("%d",&a);
     int *b=&a;
    printf("pointer: %p",&a);
    return 0;
}