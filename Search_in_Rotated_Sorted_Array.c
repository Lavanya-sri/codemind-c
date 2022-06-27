#include<stdio.h>
int main()
{
    int n,arr[100],i,x=0,y=0,key;
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
            printf("%d",i);
            x=1;
            break;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
}