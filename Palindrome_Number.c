#include<stdio.h>
int main()
{
    int n,i,x,sum=0,r;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        x=arr[i];
sum=0;
     while(x!=0)
    {
        r=x%10;
        sum=sum*10+r;
        x=x/10;
    }

    if(sum==arr[i])
    printf("True
");
    else
    printf("False
");
    }
    return 0;
}