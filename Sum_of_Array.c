#include<stdio.h>
int main()
{
    int n,arr[40],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}