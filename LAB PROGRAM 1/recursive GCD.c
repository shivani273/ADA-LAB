#include <stdio.h>
int gcd(int m,int n)
{
    if(n==0) return m;
    if(m<n) return gcd(n,m);
    return gcd(n,m%n);
}
int main()
{
    int m,n,res;
    printf("Enter m and n\n");
    scanf("%d%d",&m,&n);
    res=gcd(m,n);
    printf("GCD of %d and %d is %d.",m,n,res);
    
}