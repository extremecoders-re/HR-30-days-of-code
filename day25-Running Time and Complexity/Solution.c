#include <stdio.h>
#include <math.h>

int main() 
{
    int T, N, isPrime;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) 
    {
        scanf("%d", &N);
        
        // Fast check if number is divisible by 2
        if (N < 2 || (N > 2 && !(N&1))) printf("Not prime\n");
        else 
        {
            isPrime = 1;
            for (int j = 2; j < (int)sqrt(N); j++) 
            {
                if (!(N%j)) 
                {
                     isPrime = 0;
                     break;
                }
            }
            printf(isPrime?"Prime\n":"Not prime\n");
        }
    }
    return 0;
}