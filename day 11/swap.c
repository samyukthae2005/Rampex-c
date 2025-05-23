#include <stdio.h>
int main() 
{
    int a, b;
    int *x, *y, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = &a;  
    y = &b; 
    temp = *x;
    *x = *y;    
    *y = temp;  
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}