#include <stdio.h>
int main()
{
    int num1, num2,num3;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3) {
        printf("The maximum of %d , %d and %d is %d\n", num1, num2,num3, num1);
    } else if(num2 > num1 && num2 > num3)
    {
        printf("The maximum of %d ,%d and %d is %d\n", num1, num2,num3, num2);
    }else{
        printf("The maximum of %d ,%d and %d is %d\n", num1, num2,num3, num3);
    }
    return 0;
}