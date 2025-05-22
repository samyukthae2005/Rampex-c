#include <stdio.h>
int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = sumDigits(num);
    printf("Sum of digits = %d\n", sum);
    return 0;
}