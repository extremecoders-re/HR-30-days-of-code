#include <stdio.h>

int main()
{
    int arr[6][6], sum, max;
    for(int arr_i = 0; arr_i < 6; arr_i++) for(int arr_j = 0; arr_j < 6; arr_j++) scanf("%d",&arr[arr_i][arr_j]);
    
    max = arr[0][0] + arr[0][1] + arr[0][2] + arr[1][1] + arr[2][0] + arr[2][1] + arr[2][2];
    
    for (int i = 0; i < 6 - 2; i++)
    {
        for (int j = 0; j < 6 - 2; j++)
        {
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (sum > max) max = sum;
        }
    }
    printf("%d", max);
    return 0;
}