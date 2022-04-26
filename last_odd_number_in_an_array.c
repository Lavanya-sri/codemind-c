#include<stdio.h>
int main()
{
    int n,arr[40],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int odd=0;
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]%2!=0)
        {
            odd=arr[i];
            break;
        }
    }
    printf("%d",arr[i]);
    return 0;
}