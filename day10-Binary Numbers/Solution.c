#include <stdio.h>
#include <math.h>

int main() 
{
    int T, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        // number of bits in a decimal integer is  Floor(log2(n)) + 1
        for (int j = floor(log2(N)); j >= 0; j--) printf("%d", (N>>j) & 1); 
        printf("\n");
    }    
    return 0;
}
