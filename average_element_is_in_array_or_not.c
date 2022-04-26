#include<stdio.h>
int main()
{
    int n,arr[40],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,c;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        c=sum/n;
    }
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==c)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}