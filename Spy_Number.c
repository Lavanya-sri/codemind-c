#include<stdio.h>
int main()
{
    int n,r,sum=0,pr=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        pr=pr*r;
        n=n/10;
    }
        if(sum==pr)
        {
            printf("Spy Number");
        }
        else
        {
            printf("Not Spy Number");
        }
        return 0;
}