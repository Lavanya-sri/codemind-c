#include<stdio.h>
int main()
{
    int i,n,arr[100];
    long long int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(1<=n&&0<=arr[i]<=1010)
        {
            sum=sum+arr[i];
        }
    }
    printf("%lld",sum);
    return 0;
}