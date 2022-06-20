#include<stdio.h>
int main()
{
    int x=0,y=0,arr[50],n,i,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            x=x+arr[i];
        }
        else
        {
            y=y+arr[i];
        }
    }
    res=x-y;
    if(res%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
    return 0;
}