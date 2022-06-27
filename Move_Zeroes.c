#include<stdio.h>
int main()
{
    int n,i,j,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    for(i=j;i<n;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
