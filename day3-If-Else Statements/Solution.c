#include <stdio.h>

int main(){
    int N; 
    scanf("%d",&N);
    printf((N&1 || (!(N&1) && N>= 6 && N<=20)) ? "Weird": "Not Weird");
    return 0;
}