#include <stdio.h>

int find_gcd(int a,int b)
{
	if(b==0) return a;
	return find_gcd(b,a%b);
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int gcd = find_gcd(a,b);
	printf("%d",gcd);
	return 0;
}