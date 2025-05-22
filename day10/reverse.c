#include <stdio.h>
int reverse(int n, int rev)
{
    if (n == 0) 
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);  
}
int main() 
{
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = reverse(number, 0);  
    printf("Reversed number: %d\n", result);
    return 0;
}