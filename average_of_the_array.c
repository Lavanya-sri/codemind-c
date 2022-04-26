#include<stdio.h>
int main()
{
    int n,arr[40],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float sum=arr[0];
    float c;
    for(i=1;i<n;i++)
    {
        sum=sum+arr[i];
        //c=sum/n;
    }
    c=sum/n;
    printf("%.2f",c);
    return 0;
}