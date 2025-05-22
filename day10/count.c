#include <stdio.h>
int digits(int n) 
{
    int a=1;
    if (n == 0)
        return 0;  
    return a + digits(n / 10);  
}
int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0) 
    {
        printf("Number of digits: a\n");
    } else 
    {
        printf("Number of digits: %d\n", digits(number));
    }
    return 0;
}