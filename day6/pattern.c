#include <stdio.h>
int main()
 {
    int n = 5; 
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            putchar('*');
            putchar(' ');  
        }
        putchar('\n');  
    }
    return 0;
}