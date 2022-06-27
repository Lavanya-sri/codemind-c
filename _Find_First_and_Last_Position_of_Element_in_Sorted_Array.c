#include<stdio.h>
int main()
{
    int n,i,j,x=0,y=0,arr[100],key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("%d ",i);
            x=1;
            break;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==key)
        {
            printf("%d ",i);
            y=1;
            break;
        }
    }
    if(y==0)
    {
        printf(" -1");
    }
}