#include <stdio.h>
int fibbo(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else        return fibbo(n - 1) + fibbo(n - 2);
}
int main() 
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", fibbo(i));
    }
    return 0;
}