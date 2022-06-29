#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,x,y,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=x&&arr[i]<=y)
        {
            continue;
        }
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}