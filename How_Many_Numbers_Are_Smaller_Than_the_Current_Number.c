#include<stdio.h>
int main()
{
    int n,arr[100],i,j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[j]<arr[i])
                {
                    count++;
                }
            }
        }
        printf("%d ",count);
    }
    return 0;
}