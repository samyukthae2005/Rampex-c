#include <stdio.h>
int main() 
{
    int i, j, k, sum = 0;
    int arr[3][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {3, 4, 5}},
        {{7, 8, 9}, {10, 11, 12}, {13, 14, 15}},
        {{16, 17, 18}, {19, 20, 21}, {22, 23, 24}}
    };

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
                sum += arr[i][j][k];
            }
            printf("= %d \n",sum);
        }
    }
    return 0;
}