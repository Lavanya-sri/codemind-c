#include<stdio.h>
int fun(int n)
{
    int r,sum=0;
    while(n)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    return sum;
}
int main()
{
    int n,arr[100],sum=0,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=fun(arr[i]);
        sum+=c;
    }
    printf("%d",sum);
    return 0;
}