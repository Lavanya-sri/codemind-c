#include<stdio.h>
int main()
{
    int n,arr[100],i,j,sum=0,c=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    avg=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
    
}