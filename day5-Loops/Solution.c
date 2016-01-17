#include <stdio.h>

int Tn(int a, int b, int n)
{
    int sum=a;
    for (int i=0; i<=n; i++) sum += (1<<i)*b;
    return sum;    
}

int main() 
{
    int T,a,b,N;
    
    scanf("%d", &T); //Number of test cases
    for (int i=1; i<=T; i++) 
    {
        scanf("%d %d %d", &a, &b, &N);
        for (int j=0; j<=N-1; j++) printf("%d ", Tn(a, b, j));            
        printf("\n");
    }
    return 0;
}