#include <stdio.h>
int gcd(int m,int n)
{
    int r;
    do{
      r=m%n;
      m=n;
      n=r;
      return r;
    } while(n!=0);
}
int main()
{
    int m,n,res;
    printf("Enter m and n\n");
    scanf("%d%d",&m,&n);
    res=gcd(m,n);
    printf("The GCD is %d",res);

}