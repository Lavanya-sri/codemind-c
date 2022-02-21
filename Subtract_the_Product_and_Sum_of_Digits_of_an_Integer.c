#include<stdio.h>
int main()
{
    int n,sum=0,pr=1,r;
    scanf("%d",&n);
    int result;
    while(n>0)
    {
       r=n%10;
       sum=sum+r;
       pr=pr*r;
       n=n/10;
       result=pr-sum;
    }
    printf("%d",result);
    return 0;
}