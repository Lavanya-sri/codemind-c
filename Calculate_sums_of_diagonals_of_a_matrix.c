#include<stdio.h>
int main()
{
    int n,i,j,arr[100][100],a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                a=a+arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n-j-1)
            {
                b=b+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d",a);
    printf("
Secondary Diagonal:%d",b);
    return 0;
}